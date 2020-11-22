#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long n;
    while(t--){
        cin>>n;
        long long mins=n+1;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0 && n/i!=i){
                mins=min(mins,i+n/i);
            }
        }
        cout<<mins<<endl;
    }
}
