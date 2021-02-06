#include<bits/stdc++.h>

using namespace std;

int helper(map<int,set<int> > m,int v,int w,map<pair<int,int>, int>& mp){
    if(mp.find({v,w})!=mp.end())
    return mp[{v,w}];
    
    if(m.find(v)==m.end())
    return mp[{v,w}]=w;
    
    
    int sum=0;
    if(w%(m[v].size())==0)
    {
        //cout<<"H"<<endl;
        int tasks=w/m[v].size();
        for(auto i:m[v])
        {
            //cout<<i<<endl;
            sum+=helper(m,i,tasks,mp);
            
        }
    }
    
    return mp[{v,w}]=sum;
}
int helper2(vector<int>& vc,int v,int w,int n){
    // if(v>10001)
    // return 0;
    
    if((2*v>n || vc[2*v]==-1)  && (2*v+1>n || vc[2*v+1]==-1))
    return w;
    
    int sum=0;
    int child=0;
    if(2*v<=n && vc[2*v]!=-1)
    child++;
    if(2*v+1<=n && vc[2*v+1]!=-1)
    child++;
    
    if(w%child==0){
        if(2*v<=n)
        sum+= helper2(vc,2*v,w/child,n);
        if(2*v+1<=n)
        sum+=helper2(vc,2*v+1,w/child,n);
    }
    return sum;
}
int main(){
    //for(int i=0;i<=N;i++)for(int j=0;j<=W;j++)dp[i][j]=-1;
    int n;
    int v,w;
    //cin>>n;
    scanf("%d", &n);
    map<int,set<int> > m;
    map<pair<int,int>, int> mp;
    //int p[n+1];
    int x;
    vector<int> vc(10001,-1);
    vc[1]=1;
    for(int i=2;i<=n;i++){
        //cin>>p[i];
        scanf("%d", &x);
        if(vc[2*x]==-1)
        vc[2*x]=i;
        else
        vc[2*x+1]=i;
        
        m[x].insert(i);
    }
    int q;
    //cin>>q;
    
    // for(int i=0;i<=9;i++)
    // cout<<vc[i]<<"  ";
    
    // cout<<endl;
    
    
    
    scanf("%d", &q);
    while(q--){
        //cin>>v>>w;
        scanf("%d", &v);
        scanf("%d", &w);
        
        
        cout<<w-helper2(vc,v,w,n)<<endl;
        
        
        
        
        // int ans=w-helper(m,v,w,mp);
        // printf("%d \n", ans);
        // // for(auto i:mp){
        // cout<<i.first.first<<" "<<i.first.second<<"   "<<i.second<<endl;
    //}
    }
    
}
