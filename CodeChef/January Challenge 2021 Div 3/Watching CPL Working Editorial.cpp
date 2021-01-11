#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int arr[n+1];
        for(int i=0;i<n;i++)cin>>arr[i];
        
        sort(arr,arr+n);
        
        int suffix[n+1];
        suffix[n]=0;
        
        for(int i=n-1;i>=0;i--)
        suffix[i]=suffix[i+1]+arr[i];
        
        
        
        int dp[n+1][k+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=k;j++)
            dp[i][j]=INT_MAX;
        }
        //dp[n][0]=0;
        for(int i=n-1;i>=0;i--){
            for(int j=k;j>=0;j--){
                if(j<=arr[i]){
                    dp[i][j]=arr[i];
                    continue;
                }
                if(dp[i+1][j-arr[i]]==INT_MAX)
                dp[i][j]=INT_MAX;
                else
                    dp[i][j]=min(arr[i]+dp[i+1][j-arr[i]],dp[i+1][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<=k;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        
        int ans=INT_MAX;
        for(int i=n-1;i>=0;i--){
            if(suffix[i]-dp[i][k]>=k)
            {
                ans=n-i;
                break;
            }
        }
        if(ans==INT_MAX)
        cout<<"-1"<<endl;
        else
        cout<<ans<<endl;
    }
}
