#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    long sum;
    long mod=(long)pow(10,9)+7;
    cin>>t;
    while(t--){
        sum=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        sum=(sum%mod + (s[i]-97)%mod)%mod;
        
        sum=(sum%mod+(((s[0]-96)%mod)*((100*s.size())%mod)))%mod;
        cout<<sum;
    }
}
