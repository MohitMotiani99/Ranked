#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    map<int,int> m;
    while(t--){
        cin>>a>>b;
        m[a]=a+b;
    }
    int f=0;
    for(auto i=m.begin();i!=m.end();i++){
        for(auto j=m.begin();j!=m.end();j++){
            if(i!=j){
                if(m[i->first]==j->first && m[j->first]==i->first)
                {f=1;break;}
            }
        }
        if(f)
        break;
    }
    if(f)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
