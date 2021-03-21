#include<bits/stdc++.h>
using namespace std;

vector<int> val;
bool cmp(int a,int b)
{
    return val[a]<val[b];
}
long dfs(vector<int> adj[],int n,int s,int f){
    
    long fsum=-1;
    long ans1,ans2=-1;
    cout<<"H"<<endl;
    int maxi=adj[s][adj[s].size()-1];
    for(int i=0;i<adj[s].size();i++){
        ans2=-1;
        if(adj[s][i]!=maxi){
            ans1=val[s]+dfs(adj,n,adj[s][i],0);
            if(f==0)
            ans2=val[s]+val[maxi]+dfs(adj,n,adj[s][i],1);
        }
        else{
            if(adj[s].size()>=2){
                ans1=val[s]+dfs(adj,n,adj[s][i],0);
                if(f==0)
                ans2=val[s]+val[adj[s][adj[s][adj[s].size()-2]]]+dfs(adj,n,adj[s][i],1);
            }
            else{
                ans1=val[s]+dfs(adj,n,adj[s][i],0);
            }
        }
        fsum=max(fsum,max(ans1,ans2));
        cout<<fsum<<endl;
    }
    return fsum;
}
int main(){
    int n;
    cin>>n;
    vector<int> adj[n];
    int x;
    for(int i=1;i<=n-1;i++){
        cin>>x;
        adj[x].push_back(i);
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>x;
        val.push_back(x);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    sort(adj[i].begin(),adj[i].end(),cmp);
    
    cout<<dfs(adj,n,0,0)<<endl;
    
}
