#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b){
    return a.second<b.second;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<string> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    
    int x;
    int cost[m][m];
    map<pair<int,int>,int > cost;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>x;
            cost[{i,j}]=x;
        }
    }
    
    vector<pair<pair<int,int>,int> > v2;
    for(auto& i:cost)
    v2.push_back(i);
    
    sort(v2.begin(),v2.end(),cmp);
    
    for(int i=0;i<m;i++){
        set<char> s;
        for(int j=0;j<n;j++){
            if(s.find(v[j][i])!=s.end())
            
        }
    }
}
