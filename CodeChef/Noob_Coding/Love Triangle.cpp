#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    float a,b,c;
    while(t--){
        cin>>a>>b>>c;
        int f=0;
        if((a+b<=c)||(b+c<=a)||(a+c<=b))
        f=1;
        if(!f){
            cout<<"YES ";
            float s=(a+b+c)/2;
            cout<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    
}
