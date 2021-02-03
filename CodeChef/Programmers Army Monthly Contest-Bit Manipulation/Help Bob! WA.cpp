#include<bits/stdc++.h>
using namespace std;
int main(){
    long n,k;
    cin>>n>>k;
    long arr[n];
    for(long i=0;i<n;i++)cin>>arr[i];
    
    long dp[n];
    long andnum=1<<(k-1);
    dp[0]=(arr[0] & andnum)?1:0;
    
    for(long i=1;i<n;i++){
        if(arr[i] & andnum)
        {
            if(dp[i-1]%2==1)
            dp[i]=dp[i-1];
            else
            dp[i]=1+dp[i-1];
        }
        else{
            if(dp[i-1]%2==1)
            dp[i]=1+dp[i-1];
            else
            dp[i]=dp[i-1];
        }
    }
    cout<<dp[n-1]<<endl;
}
