#include<bits/stdc++.h>
using namespace std;
int findpar(int par[],int x,int n){
    while(x!=par[x])
    x=par[x];
    
    return x;
}
int main(){
    int n,m,a,b,p,q;
    cin>>n>>m;
    cin>>p>>q;
    //int dp[n+1][n+1];
    //memset(dp,0,sizeof(dp));
    //bool vis[n+1];
    //memset(vis,false,sizeof(vis));
    map<int,int> mp;
    int par[n+1];
    for(int i=0;i<=n;i++)
    par[i]=i;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        //cout<<"H"<<endl;
        par[b]=findpar(par,a,n);
    }
    /*
    for(int i=0;i<=n;i++)
    cout<<par[i]<<" ";
    cout<<endl;
    */
    for(int i=1;i<=n;i++){
        if(mp.find(par[i])==mp.end())
        mp[par[i]]=1;
        else
        mp[par[i]]++;
    }
    /*
    for(auto i=mp.begin();i!=mp.end();i++)
    cout<<i->first<<" "<<i->second<<endl;
    cout<<endl;
    /*
    queue<int> q;
    int c=0;
    int cnt=0;
    //set<int> s;
    for(auto i=m.begin();i!=m.end();i++){
        q.push(i->first);
        c=0;
        while(!q.empty()){
            int a=q.front();
            q.pop();
            c++;
            vis[a]=true;
            for(int j=0;j<=n;j++){
                if(dp[a][j] && !vis[j])
                q.push(j);
            }
        }
        memset(vis,false,sizeof(vis));
        cnt++;
    }
    */
    int cnt=mp.size();
    int num_wires=cnt-1;
    int num_av=cnt;
    //cout<<cnt<<endl;
    //cout<<num_wires<<endl;
    //cout<<num_av<<endl;
    int ans=INT_MAX;
    for(int i=1;i<=num_av;i++){
        ans=min(ans,i*p+(cnt-i)*q);
    }
    cout<<ans<<endl;
}
