#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        long ans=a;
        while((ans|(ans+1))<=b)
        ans=ans|(ans+1);
        
        cout<<ans<<endl;
    }
}
