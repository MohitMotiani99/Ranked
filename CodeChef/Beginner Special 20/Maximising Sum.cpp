#include<bits/stdc++.h>
using namespace std;
#define N 100000
#define k 100
    int arr[N+1];
    long n,v;
    long dp[N+1][k+1][2];
    
long maxval(int i,int k_left,int flg){
    if(i==n+1)
    {
        if(flg==0)return -1e10;
        else return 0;
    }
        
        if(dp[i][k_left][flg]!=-1e10)
        return dp[i][k_left][flg];
        else if(flg==0){
            long c;
            long a=maxval(i+1,k_left,flg);
            long b=maxval(i+1,k_left,1)+arr[i];
            if(k_left>0) c=maxval(i+1,k_left-1,1)-arr[i];
            return dp[i][k_left][flg]=max(a,max(b,c));
        }
        else{
            //long a=maxval(i+1,k_left,0);
            long c;
            long a=0;
            long b=maxval(i+1,k_left,1)+arr[i];
            if(k_left>0) c=maxval(i+1,k_left-1,1)-arr[i];
            return dp[i][k_left][flg]=max(a,max(b,c));
        }
    
}
int main(){
    
    cin>>n>>v;
    for(int i=1;i<=n;i++)
    cin>>arr[i];
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=v;j++)
        {
            dp[i][j][0]=dp[i][j][1]=-1e10;
        }
    }
    long ans=maxval(1,v,0);
    
    cout<<ans<<endl;
}
