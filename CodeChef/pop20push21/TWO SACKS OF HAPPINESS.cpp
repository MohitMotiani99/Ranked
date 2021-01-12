#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<pair<int,int>,long> a ,pair<pair<int,int>,long> b){
    return a.second<b.second;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    map<pair<int,int>,long> m;
    long sum=0;
    int beg=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>0 && beg==-1){
        sum+=arr[i];
        beg=i;
        }
        else if(arr[i]>0 && beg>=0)
        sum+=arr[i];
        else if(arr[i]<=0 && sum>0){
            m.insert({{beg,i-1},sum});
            sum=0;
            beg=-1;
        }
    }
    if(sum>0){
        m.insert({{beg,n-1},sum});
        sum=0;
        beg=-1;
    }
    
    for(auto i=m.begin();i!=m.end();i++){
        cout<<(i->first).first<<" "<<(i->first).second<<"    "<<i->second<<endl;
    }
    
    if(m.size()==0){
        sort(arr,arr+n);
        cout<<arr[n-1]+arr[n-2]<<endl;
    }
    else if(m.size()==1){
        if((m.begin()->first).first==(m.begin()->first).second){
            sort(arr,arr+n);
            cout<<arr[n-1]+arr[n-2]<<endl;
        }
        else
        cout<<(m.begin()->second)<<endl;
    }
    else{
        vector<pair<pair<int,int>,long> > v;
        for(auto &i : m){
            v.push_back(i);
        }
        sort(v.begin(),v.end(),cmp);
        cout<<v[v.size()-1].second+v[v.size()-2].second<<endl;
    }
}
