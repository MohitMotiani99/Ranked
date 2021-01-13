#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    arr[i]=i+1;
    if(m==0)
    cout<<(n*(n-1))/2<<endl;
    else{
    for(int i=0;i<m;i++){
        cin>>a>>b;
        arr[b-1]=arr[a-1];
    }
    //for(int i=0;i<n;i++)
    //cout<<arr[i]<<" ";
    //cout<<endl<<endl;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    
    //for(auto i=mp.begin();i!=mp.end();i++)
    //cout<<i->first<<" "<<i->second<<endl;
    //cout<<endl;
    vector<int> out;
    for(auto i=mp.begin();i!=mp.end();i++)
    out.push_back(i->second);
    
    long long sum=0;
    for(int i=0;i<out.size();i++){
        for(int j=i+1;j<out.size();j++)
        sum+=(out[i]*out[j]);
    }
    
    cout<<sum<<endl;
    }
}
