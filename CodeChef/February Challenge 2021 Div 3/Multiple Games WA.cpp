#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,q,mx,l,r;
    cin>>t;
    while(t--){
        cin>>n>>q>>mx;
        
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        map<int,int> m;
        
        while(q--){
            cin>>l>>r;
            for(int i=l-1;i<r;i++){
                m[arr[i]]++;
            }
        }
        int maxi=INT_MIN;
        for(auto i:m){
            if(maxi<i.second && i.second>=1 && i.second<=mx)
            maxi=i.second;
        }
        
        cout<<maxi<<endl;
    }
}
