#include<bits/stdc++.h>
#define mod (long)(pow(10,9)+7)
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char> st;
    for(int i=0;i<n;i++){
        if(isalpha(s[i])){
            if(isupper(s[i]))
            s[i]=tolower(s[i]);
            st.insert(s[i]);
        }
    }
    if(st.size()%2==0)
    cout<<"SPAM"<<endl;
    else
    cout<<"AVENGER"<<endl;
}
long ncr(int n,int r,vector<long>& fact){
    long nf,rf,nrf;
    if(n>=fact.size()){
        for(int i=fact.size();i<=n;i++)
        {
            fact.push_back((i%mod*fact[i-1]%mod)%mod);
        }
    }
    nf=fact[n];
    rf=fact[r];
    nrf=fact[n-r];
    
    return ((nf%mod)/((rf*nrf)%mod))%mod;
    
}
void solve2(vector<long>& fact){
    int n,m,k;
    cin>>n>>m>>k;
    int p;
    cin>>p;
    int x;
    unordered_set<int> s;
    for(int i=0;i<p;i++)
    {
        cin>>x;
        s.insert(x);
    }
    
    long sum=0;
    for(int r=0;r<=min(n,k);r++){
        if(s.find(k-r)==s.end()){
            sum+=((ncr(n,r,fact)*ncr(m,k-r,fact))%mod);
        }
    }
    cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    vector<long> fact;
    fact.push_back(1);
    while(t--){
        //solve();
        solve2(fact);
        for(int i=0;i<fact.size();i++)
        cout<<fact[i]<<" ";
        cout<<endl;
    }
}
