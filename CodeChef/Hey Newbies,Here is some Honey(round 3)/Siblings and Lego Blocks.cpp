#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    fastio
    int t,n,x,m;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        
        list<string> l;
        for(int i=0;i<n;i++){
            cin>>s>>x;
            list<string>::iterator it=l.begin();
            advance(it,x-1);
            l.insert(it,s);
        }
        
        cin>>m;
        map<string,bool> mp;
        for(int i=0;i<m;i++)
        {
            cin>>s;
            mp[s]=true;
        }
        int f=true;
        for(auto i=l.begin();i!=l.end();i++){
            if(mp[*i]==false)
            {cout<<*i<<endl;f=false;}
        }
        if(f)
        cout<<"-1"<<endl;
    }
}
