#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,k,n;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            if(k){
            cout<<i<<" ";
            k--;
            }
            else
            cout<<-1*i<<" ";
        }
        cout<<endl;
    }
}
