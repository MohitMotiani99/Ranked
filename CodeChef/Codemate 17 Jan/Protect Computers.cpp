#include<bits/stdc++.h>
using namespace std;
void dfs(int st,bool vis[],vector<int> adj[]){
    vis[st]=true;
    
    for(int i=0;i<adj[st].size();i++){
        if(!vis[adj[st][i]])
        dfs(adj[st][i],vis,adj);
    }
}
int main()
{
    int n,m,a,b,x,y;
    cin>>n>>m;
    cin>>a>>b;
    
    vector<int> adj[n];
    
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adj[x-1].push_back(y-1);
        adj[y-1].push_back(x-1);
    }
    
    bool vis[n];
    memset(vis,false,sizeof(vis));
    
    int cnt=0;
    for(int i=0;i<n;i++){
        if(!vis[i])
        {
            dfs(i,vis,adj);
            cnt++;
        }
    }
    cout<<a+min(a,b)*(cnt-1)<<endl;
}
