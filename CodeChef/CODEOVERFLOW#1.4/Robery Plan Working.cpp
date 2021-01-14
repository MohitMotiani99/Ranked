#include<bits/stdc++.h>
using namespace std;
int main(){
    long t,x,y,a,b,n,m;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b>>n>>m;
        int sum=INT_MIN;
        if(n<m){
            for(int i=0;i<=a;i++){
                if(i*n>x)continue;
                
                int za=min(b,(x-i*n)/m);
                int zb=min(a-i,y/n);
                int zc=min(b-za,(y-n*zb)/m);
                
                sum=max(sum,i+za+zb+zc);
            }
            cout<<sum<<endl;
        }
        else{
            swap(a,b);
            swap(n,m);
            
            for(int i=0;i<=a;i++){
                if(i*n>x)continue;
                
                int za=min(b,(x-i*n)/m);
                int zb=min(a-i,y/n);
                int zc=min(b-za,(y-n*zb)/m);
                
                sum=max(sum,i+za+zb+zc);
            }
            cout<<sum<<endl;
        }
        
    }
}
