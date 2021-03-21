#include<bits/stdc++.h>
using namespace std;
long power(long n,long mod){
    if(n==0)
    return 1;
    if(n==1)
    return 2;
    
    long ans=power(n/2,mod);
    if(n%2==0)
    return (ans*ans)%mod;
    else
    return (2*((ans*ans)%mod))%mod;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long n;
        long mod=pow(10,9)+7;
        cin>>n;
        cout<<(power(n,mod)-(power(n-3,mod)*((n-2)%mod))%mod)<<endl;
    }
}
