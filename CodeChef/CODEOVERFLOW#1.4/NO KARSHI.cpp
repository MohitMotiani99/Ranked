#include<bits/stdc++.h>
using namespace std;
unsigned long long fact(int n){
    if(n<0)
    return 0;
    if(n==0)
    return 1;
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
        int f=0,g=0;
        unsigned long long total=fact(n);
        //cout<<total<<endl;
        if(s.find('k')!=string::npos && s.find('a')!=string::npos && s.find('r')!=string::npos){
            f=1;
            total=total - fact(n-2);
        }
        if(s.find('s')!=string::npos && s.find('h')!=string::npos && s.find('i')!=string::npos){
            total=total - fact(n-2);
            g=1;
        }
        if(f && g)
        total+=fact(n-4);
        cout<<total<<endl;
    }
}
