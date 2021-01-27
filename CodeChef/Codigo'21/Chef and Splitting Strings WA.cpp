#include<bits/stdc++.h>
using namespace std;
long mod=pow(10,9)+7;

long long breakit(string s,int n,int k){
    if(n<0)
    return 0;
    if(n==0)
    return 1;
    if(n==1)
    return 1;
    
    long long sum=0;
    
    for(int i=1;i<=min(n,k);i++){
        long long ans=0;
        if(i<n)
        ans=breakit(s.substr(i),n-i,k);
        if(i==n)
        ans=1;
        sum=(sum%mod + ans%mod)%mod;
    }
    //cout<<st<<" "<<sum<<endl;
    return sum;
}
int main(){
    int t,n,k;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cin>>s;
        
        cout<<breakit(s,n,k)<<endl;        
    }
}
