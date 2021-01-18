#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x,m;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        vector<string> v(n);
        //cout<<"H0"<<endl;
        for(int i=0;i<n;i++){
            cin>>s>>x;
            v.insert(v.begin()+x-1,s);
        }
        //cout<<"H1"<<endl;
        cin>>m;
        //set<string> st;
        map<string,bool> mp;
        for(int i=0;i<m;i++)
        {
            cin>>s;
            mp[s]=true;
            //st.insert(s);
        }
        //cout<<"H2"<<endl;
        vector<string> out;
        for(int i=0;i<n;i++){
            //if(st.find(v[i])==st.end())
            if(mp[v[i]]==false)
            out.push_back(v[i]);
        }
        //cout<<"H3"<<endl;
        for(int i=0;i<out.size();i++)
        cout<<out[i]<<endl;
    }
}
