#include<bits/stdc++.h>
using namespace std;
int helper(int arr[],int i,int c1,long s1,int c2,long s2,long k,int dp[]){
    if(i==0){
        if(s1+arr[i]<k || s2+arr[i]<k)
        dp[i]= INT_MAX;
        
        else
        dp[i]= c1+c2;
        
        return dp[i];
    }
    if(dp[i]!=-1)
    return dp[i];
    
    if(s1>=k && s2>=k)
    {dp[i]= c1+c2;
    return dp[i];}
    
    dp[i]= min(helper(arr,i-1,c1+1,s1+arr[i],c2,s2,k,dp),helper(arr,i-1,c1,s1,c2+1,s2+arr[i],k,dp));
    return dp[i];
    
    
}
int main(){
    int t;
    cin>>t;
    long n,k;
    while(t--){
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
    
        sort(arr,arr+n);
        int c1,c2;
        long s1,s2;
        c1=c2=s1=s2=0;
        int dp[n];
        for(int i=0;i<n;i++)dp[i]=-1;
        int ans=helper(arr,n-1,c1,s1,c2,s2,k,dp);
        
        if(ans==INT_MAX)
        cout<<"-1"<<endl;
        else
        cout<<ans<<endl;
    }

}
