#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int> m;
    m[1]=1;
    map<pair<int,int>,bool> m2;
    int u,v,w;
    for(int i=0;i<n-1;i++){
        cin>>u>>v>>w;
        if(w==2)
        m2[{v,u}]=true;
        
        m[v]=u;
    }
    /*
    cout<<"Common: "<<endl;
    for(auto i=m.begin();i!=m.end();i++)
    cout<<i->first<<" "<<i->second<<endl;
    cout<<endl;
    
    cout<<"Dirty: "<<endl;
    for(auto i=m2.begin();i!=m2.end();i++)
    cout<<(i->first).first<<" "<<(i->first).second<<" "<<i->second<<endl;
    cout<<endl;
    */
    int c=0;
    for(auto i=m2.begin();i!=m2.end();i++){
        int u=(i->first).first;
        int v=(i->first).second;
        int f=1;
        
        while(1){
            //cout<<u<<" "<<v<<" "<<c<<endl;
            if(f && m2.find({u,v})!=m2.end()){
                c++;
                f=0;
            }
            else if(!f && m2.find({u,v})!=m2.end()){
                c--;
            }
            u=v;
            v=m[u];
            
            //cout<<c<<endl;
            
            if(v==u && v==1)
            break;
        }
        //cout<<c<<endl;
        //cout<<endl<<endl;
    }
    cout<<c<<endl;
}
