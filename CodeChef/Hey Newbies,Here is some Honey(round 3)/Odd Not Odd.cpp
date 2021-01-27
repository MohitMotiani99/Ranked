#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    //unsigned long long n;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int ev=0,od=0;
        for(int i=0;i<str.size();i++){
            if((str[i]-48)%2==0)
            ev++;
            else
            od++;
        }
        
        if(od<2)
        cout<<"-1"<<endl;
        else if(od%2==1)
        cout<<"1"<<endl;
        else
        cout<<"0"<<endl;
    }
}
