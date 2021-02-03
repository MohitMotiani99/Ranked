#include<bits/stdc++.h>
using namespace std;
int main(){
    int ts;
    string t,s;
    cin>>ts;
    while(ts--){
        cin>>t>>s;
        int n=t.size();
        int m=s.size();
        
        int dp[n+1][m+1];
        string ans="";
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0)
                dp[i][j]=0;
                else if(t[i-1]==s[j-1])
                dp[i][j]=1+dp[i-1][j-1];//ans+=t[i-1];
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
       // cout<<ans<<endl;
        
        if(dp[n][m]==n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
