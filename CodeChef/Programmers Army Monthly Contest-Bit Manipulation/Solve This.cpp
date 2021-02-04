#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,q,l,r;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        scanf("%d", &q);
        int dp[n+1];
        for(int i=1;i<=n;i++){
            int cnt=0;
            for(int k=0;k<=i;k++){
                if((i+k)==(i^k))
                cnt++;
            }
            // cout<<i<<"  "<<cnt<<endl;
            if(i==1)
            dp[i]=cnt;
            else
            dp[i]=dp[i-1]+cnt;
        }
        while(q--){
            scanf("%d", &l);
            scanf("%d", &r);
            if(l>1)
            printf("%d \n", dp[r]-dp[l-1]);
            else
            printf("%d \n", dp[r]);
        }
    }
}
