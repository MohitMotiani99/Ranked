#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    
    cin>>t;
    bool prime[401];
    
    memset(prime,true,sizeof(prime));
    
    for(int p=2;p*p<=400;p++){
        if(prime[p]){
        for(int i=p*p;i<=400;i+=p)
            prime[i]=false;
        }
    }
    while(t--){
        int f=0;
        for(int i=2;i<=400;i++){
            if(prime[i]){
                cout<<i<<endl;
                cin>>s;
                if(s=="YES")
                f++;
                
                if(f>2)
                break;
            }
        }
        if(!f)
        cout<<"1"<<endl;
        else
        cout<<"0"<<endl;
    }
}
