#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,d;
    cin>>t;
    while(t--){
        cin>>n>>d;
        int x;
        float cr=0,cnr;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x>=80 || x<=9)
            cr++;
        }
        cnr=n-cr;
        cout<<ceil(cr/d)+ceil(cnr/d)<<endl;
    }
}
