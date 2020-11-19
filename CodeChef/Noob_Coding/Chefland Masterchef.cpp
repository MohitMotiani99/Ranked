#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    long k,x;
    while(t--){
        long sum=0;
        cin>>n>>k;
        unordered_map<long,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            m[x]++;
        }
        for(auto i=m.begin();i!=m.end();i++){
            //cout<<i->first<<" "<<i->second<<endl;
            if(k>=(i->second)){
            auto it=m.find(k-(i->first));
            if(it!=m.end() && i!=it){
                //cout<<i->first<<" "<<it->first<<endl;
            sum+=((i->second)*(it->second));
            }
            }
        }
        cout<<sum<<endl;
    }
}
