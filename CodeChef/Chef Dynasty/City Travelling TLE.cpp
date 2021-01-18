#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,q,u,v;
    cin>>n>>k;
    pair<bool,int> dp[n][n];
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)dp[i][j]={false,0};
    for(int i=0;i<n-1;i++){
        cin>>u>>v;
        dp[u-1][v-1].first=true;
        dp[v-1][u-1].first=true;
        dp[u-1][v-1].second=0;
        dp[v-1][u-1].second=1;
    }
    cin>>q;
    while(q--){
        bool vis[n];
        memset(vis,false,sizeof(vis));
        
        cin>>u>>v;
        u--;
        v--;
        
        //c1
        int c1=INT_MAX;
        queue<pair<int,int> > q;
        q.push({u,0});
        while(!q.empty()){
            pair<int,int> p=q.front();
            q.pop();
            vis[p.first]=true;
            if(p.first==v)
            c1=min(c1,p.second);
            
            else{
                for(int i=0;i<n;i++){
                    if(dp[p.first][i].first && !vis[i])
                    q.push({i,p.second+dp[p.first][i].second});
                }
            }
        }
        
        /*
        q.clear();
        int c2=INT_MAX;
        
        swap(u,v);
        q.push({u,0});
        while(!q.empty()){
            pair<int,int> p=q.front();
            q.pop();
            vis[p.first]=true;
            if(p.first==v)
            c2=min(c2,p.second);
            
            else{
                for(int i=0;i<n;i++){
                    if(dp[p.first][i].first && !vis[i])
                    q.push({i,p.second+dp[p.first][i].second});
                }
            }
        }
        */
        cout<<c1*k<<endl;
    }
}
