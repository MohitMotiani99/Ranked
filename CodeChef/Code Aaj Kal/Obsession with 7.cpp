#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    //string str;
    long n;
    cin>>t;
    while(t--){
        cin>>n;
        string str=to_string(n);
        
        cin>>str;
        sort(str.begin(),str.end());
        
        long c=0;
        do{
            long a=stol(str);
            if(a%7==0)
            c++;
            
        }while(next_permutation(str.begin(),str.end()));
        
        cout<<c<<endl;
    }
}
