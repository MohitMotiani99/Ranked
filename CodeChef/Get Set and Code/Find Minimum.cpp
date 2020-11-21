#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long n;
    cin>>t;
    while(t--){
        cin>>n;
        long long ns=sqrt(n);
        int f=1;
        long i=ns;
        while(f){
            if(n%i==0)
            f=0;
            else
            i++;
        }
        int f2=1;
        long j=ns;
        while(f2){
            if(n%j==0)
            f2=0;
            else
            j--;
        }
        cout<<min(i+n/i,j+n/j)<<endl;
    }
}
