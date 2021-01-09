#include<bits/stdc++.h>
using namespace std;
struct trip{
    int p,q,r;
};
pair<int,int> knap01(int arr[],int x,int s,int n,int m){
    pair<int,int> dp[s+1][x+1];
    for(int i=0;i<=s;i++){
        for(int j=0;j<=x;j++)
        dp[i][j].first=dp[i][j].second=0;
    }
    
    for(int i=0;i<=s;i++){
        for(int j=0;j<=x;j++){
            if(i==0)
            dp[i][j]={0,0};
            else if(j==0)
            dp[i][j]={0,0};
            else if(j-arr[i-1]>=0){
                if(arr[i-1]==n)
                {
                    if(1+dp[i-1][j-n].first>dp[i-1][j].first)
                    {
                        dp[i][j].first=1+dp[i-1][j-n].first;
                        dp[i][j].second=dp[i-1][j-n].second;
                    }
                    else{
                        dp[i][j].first=dp[i-1][j].first;
                        dp[i][j].second=dp[i-1][j].second;
                    }
                }
                else if(arr[i-1]==m)
                    if(1+dp[i-1][j-m].second>dp[i-1][j].second)
                    {
                        dp[i][j].second=1+dp[i-1][j-m].second;
                        dp[i][j].first=dp[i-1][j-m].first;
                    }
                    else
                        dp[i][j]=dp[i-1][j];
                    
            }
            else
            dp[i][j]=dp[i-1][j];
            
            //cout<<dp[i][j].first<<" "<<dp[i][j].second<<"    ";
        }
        //cout<<endl;
    }
    
    
    return dp[s][x];
}
int main(){
    int t;
    long x,y,a,b,n,m;
    cin>>t;
    while(t--){
        cin>>x>>y;
        cin>>a>>b;
        cin>>n>>m;
        
        int arr[a+b];
        for(int i=0;i<a;i++)
        arr[i]=n;
        for(int i=a;i<a+b;i++)
        arr[i]=m;
        
        //for(int i=0;i<a+b;i++)
        //cout<<arr[i]<<" ";
        //cout<<endl;
        
        pair<int,int> ans=knap01(arr,x,a+b,n,m);
        
        cout<<ans.first<<" "<<ans.second<<endl;
        
        a-=ans.first;
        b-=ans.second;
        int arr2[a+b];
        for(int i=0;i<a;i++)
        arr2[i]=n;
        for(int i=a;i<a+b;i++)
        arr2[i]=m;
        
        //for(int i=0;i<a+b;i++)
        //cout<<arr2[i]<<" ";
        //cout<<endl;
        
        pair<int,int> ans2=knap01(arr2,y,a+b,n,m);
        
        cout<<ans2.first<<" "<<ans2.second<<endl;
        cout<<ans.first+ans2.first+ans.second+ans2.second<<endl<<endl;
    }
}
