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
    
    map<int,int> mp;
    int par[n+1];
    for(int i=0;i<=n;i++)
    par[i]=i;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        //cout<<"H"<<endl;
        par[b]=par[a];
    }
    /*
    for(int i=0;i<=n;i++)
    cout<<par[i]<<" ";
    cout<<endl;
    */
    for(int i=1;i<=n;i++){
        mp[par[i]]++;
    }
    
    int cnt=mp.size();
    int num_wires=cnt-1;
    int num_av=cnt;
    //cout<<cnt<<endl;
    //cout<<num_wires<<endl;
    //cout<<num_av<<endl;
    int ans=INT_MAX;
    
    cout<<p+min(p,q)*(cnt-1)<<endl;
}
