#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,u;
    cin>>n>>u;
    string arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    string a;
    int e,r;
    map<string,pair<int,int> > m;
    map<string,int> m2;
    for(int i=0;i<u;i++){
        cin>>a>>e>>r;
        m[a]={e,r};
        m2[a]=0;
    }
    
    // for(auto i:m)
    // cout<<i.first<<"       "<<i.second.first<<"  "<<i.second.second<<endl; 
    
    // for(auto i:m2)
    // cout<<i.first<<"       "<<i.second<<endl; 
    
    int time=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(m2[arr[i]]==0){
            m2[arr[i]]=time+m[arr[i]].first;
            time+=m[arr[i]].first;
        }
        else if(m2[arr[i]]!=0 && time-m2[arr[i]]>=m[arr[i]].second){
            time+=m[arr[i]].first;
            m2[arr[i]]=time;
        }
        else{
            //cout<<"H"<<endl;
            ans+=(m[arr[i]].second-(time-m2[arr[i]]));
            time+=(m[arr[i]].second-(time-m2[arr[i]]));
            
        }
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;
}
