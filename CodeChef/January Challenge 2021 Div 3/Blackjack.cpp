#include<bits/stdc++.h>
using namespace std;
int helper(int arr[],int n,int swaps,int x,int y,int ind,long sum){
    if(ind>=n){
        cout<<"H1"<<endl;
        if(sum<x)
        return INT_MAX;
    }
    if(sum>=x && sum<=y)
    {
        cout<<"H2"<<" "<<swaps<<endl;
        return swaps;
    }
    
    int res=INT_MAX;
    
        
        //int f=1;
        for(int i=ind;i<n;i++){
            //cout<<i<<endl;
            if(sum+arr[i]>=x && sum+arr[i]<=y)
            {
                if(res==INT_MAX)
                return 0;
                else
                return res;
            }
            else if(sum+arr[i]>y)
            {
                //f=0;
                swap(arr[ind],arr[i]);
                int ans=helper(arr,n,swaps+1,x,y,ind+1,sum+arr[ind]);
                cout<<"Sum: "<<sum<<" "<<"Swaps: "<<swaps<<"  ";
                swap(arr[ind],arr[i]);
                cout<<"Ans: "<<ans<<"  ";
                res=min(res,ans);
            }
            else if(sum+arr[i]<x)
            sum+=arr[i];
        }
        cout<<"H3"<<" "<<res<<endl;
        return res;
    
    
    //cout<<"H4"<<" "<<swaps<<endl;
    //return helper(arr,n,swaps,x,y,ind+1,sum+arr[ind]);
    //return 0;
}
int main(){
    int t,n,x,y;
    cin>>t;
    while(t--){
        cin>>n>>x>>y;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        
        int swaps=0;
        long sum=0;
        int a=helper(arr,n,swaps,x,y,0,sum);
        if(a==INT_MAX)
        cout<<"-1"<<endl;
        else
        cout<<a-1<<endl;
    }
}
