#include<bits/stdc++.h>
using namespace std;
int n,k,a,b,q,act,x,y;
int at[100000+1],bt[100000+1],dp[100000+1];
void updatea(int x,int y){
    while(x<=n){
        at[x]+=y;
        x++;
        //x+=x&-x;
    }
}
void updateb(int x,int y){
    while(x<=n){
        bt[x]+=y;
        x++;
        //x+=x&-x;
    }
}
int getsuma(int x){
    int sum=0;
    while(x){
        sum+=at[x];
        //x--;
        x-=x&-x;
    }
    return sum;
}
int getsumb(int x){
    int sum=0;
    while(x){
        sum+=bt[x];
        //x--;
        x-=x&-x;
    }
    return sum;
}

int main(){
    cin>>n>>k>>a>>b>>q;
    while(q--){
        cin>>act;
        if(act==1){
            cin>>x>>y;
            updatea(x,min(dp[x]+y,a)-min(dp[x],a));
            updateb(x,min(dp[x]+y,b)-min(dp[x],b));
            dp[x]+=y;
            /*
            for(int i=1;i<=n;i++)
            cout<<at[i]<<" ";
            cout<<endl;
            
            for(int i=1;i<=n;i++)
            cout<<bt[i]<<" ";
            cout<<endl;
            
            for(int i=1;i<=n;i++)
            cout<<dp[i]<<" ";
            cout<<endl<<endl;
            */
        }
        else{
            cin>>x;
            //long ans=getsumb(x-1)+getsuma(n)-getsuma(x+k-1);
            long ans=bt[x-1]+at[n]-at[x+k-1];
            cout<<ans<<endl;
        }
    }
}
