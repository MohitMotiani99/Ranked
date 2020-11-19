#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long n,a,b,n2;
    long mod=(long)pow(10,9)+7;
    cin>>t;
    while(t--){
        cin>>n;
        n2=n;
        n=n%mod;
        a=(((n*n)%mod)*n)%mod;
        n2--;
        b=((n2%mod)*(n2%mod))%mod;
        cout<<(a+b)%mod<<endl;
    }
}
