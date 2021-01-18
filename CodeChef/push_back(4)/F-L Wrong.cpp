#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
   cin.tie(NULL);
   cout.tie(NULL);
   
   int t,n;
   cin>>t;
   while(t--){
       scanf("%d",&n);
       //cout<<n*(n+1)<<endl;
       unsigned long long a=n*(n);
       printf("%llu \n",a);
       
   }
}
