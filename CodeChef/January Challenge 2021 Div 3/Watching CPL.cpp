#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        
        sort(arr,arr+n);
        
        int dp[n][k+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<=k;j++)
            dp[i][j]=INT_MAX;
        }
        for(int i=n-1;i>=0;i--){
            for(int j=k;j>=0;j--){
                if(i==n-1)
                {
                    if(j<=arr[i])
                    dp[i][j]=arr[i];
                    else
                    dp[i][j]=INT_MAX;
                }
                else if(j>arr[i])
                dp[i][j]=min(arr[i]+dp[i+1][j-arr[i]],dp[i+1][j]);
                else if(j==arr[i])
                dp[i][j]=min(arr[i],dp[i+1][j]);
                else
                dp[i][j]=arr[i];
            }
        }
        /*for(int i=0;i<n;i++){
            for(int j=0;j<=k;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }*/
        
        int postsum[n];
        postsum[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        postsum[i]=postsum[i+1]+arr[i];
        
        int ans=INT_MAX;
        for(int i=n-1;i>=0;i--){
            if(postsum[i]-dp[i][k]>=k)
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
