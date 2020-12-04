#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        long ae,ao,be,bo;
        ae=a/2;
        ao=a-ae;
        be=b/2;
        bo=b-be;
        
        long long ans=ae*be+ao*bo;
        cout<<ans<<endl;
    }
}
