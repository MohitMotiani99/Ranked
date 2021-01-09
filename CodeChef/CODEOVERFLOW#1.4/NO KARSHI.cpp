#include<bits/stdc++.h>
using namespace std;
unsigned long long fact(int n){
    unsigned long long res=1;
    for(int i=1;i<=n;i++)
    res=res*i;
    
    return res;
}
int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int n=s.size();
        string a="kar",b="shi";
        int f=0;
        unsigned long long total=fact(n);
        //cout<<total<<endl;
        if(s.find('k')!=string::npos && s.find('a')!=string::npos && s.find('r')!=string::npos){
            total=total - fact(n-2);
        }
        if(s.find('s')!=string::npos && s.find('h')!=string::npos && s.find('i')!=string::npos){
            total=total - fact(n-2);
        }
        
        cout<<total<<endl;
    }
}
