#include<bits/stdc++.h>
using namespace std;
void bfs(vector<int> adj[],bool *vis,int st,set<int>& s){
    queue<int> q;
    q.push(st);
    while(!q.empty()){
        int p=q.front();
        q.pop();
        vis[p]=true;
        
        for(int i=0;i<adj[p].size();i++){
            if(!vis[adj[p][i]])
            {
                s.insert(adj[p][i]);
                q.push(adj[p][i]);
            }
        }
    }
}
int main(){
    int t,n,k,a,b,q;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> adj[n];
        int par[n];
        for(int i=0;i<n;i++)par[i]=i;
        map<int,int> m;
        for(int i=0;i<k;i++){
            cin>>a>>b;
            // adj[a-1].push_back(b-1);
            // adj[b-1].push_back(a-1);
            par[b-1]=par[a-1];
            m[par[a-1]]++;
        }
        //cout<<"H"<<endl;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<adj[i].size();j++)
        //     cout<<adj[i][j]<<" ";
        //     cout<<endl;
        // }
        cin>>q;
        while(q--){
            bool fr=false;
            cin>>a>>b;
            //set<int> as,bs;
            //int as=0,bs=0;
            //bool *vis=new bool[n];
            //for(int i=0;i<n;i++)vis[i]=false;
            //bfs(adj,vis,a-1,as);
            
            
            
            
            
            int ap=par[a-1];
            int bp=par[b-1];
            if(ap==bp)
            fr=true;
            
            int as=m[par[a-1]];
            int bs=m[par[b-1]];
            // for(int i=0;i<n;i++){
            //     if(par[i]==ap && i!=a-1)
            //     {
            //         if(i==b-1)
            //         fr=true;
            //         as++;
            //     }
            // }
            
            
            // for(int i=0;i<n;i++){
            //     if(par[i]==bp && i!=b-1)
            //     bs++;
            // }
            
            // for(auto i:as)
            // cout<<i<<" ";
            
            // cout<<endl;
            
            
            //for(int i=0;i<n;i++)vis[i]=false;
            //bfs(adj,vis,b-1,bs);
            
            // for(auto i:bs)
            // cout<<i<<" ";
            
            // cout<<endl;
            
            
            if(!fr){
                if(as>bs)
                cout<<a<<endl;
                else if(as<bs)
                cout<<b<<endl;
                else
                cout<<"0"<<endl;
            }
            else if(fr){
                // int c=0;
                // for(int i=1;i<=n;i++){
                //     if(as.find(i)!=as.end() && bs.find(i)!=bs.end())
                //     c++;
                // }
                
                if((as-1)%2==0)
                cout<<a<<endl;
                else
                cout<<b<<endl;
            }
            else if(a==b)
            cout<<"0"<<endl;
        }
    }
}
