#include<bits/stdc++.h>
using namespace std;
int power(int x,long y,int m){
    int res=1;
    x=x%m;
    
    if(x==0)
    return 0;
    
    while(y>0){
        if( y & 1)
            res=(res*x)%m;
        
        y=y>>1;
        x=(x*x)%m;
    }
    return res;
}
unsigned long long power2(int x,long y,int m){
    unsigned long long res=1;
    for(int i=0;i<y;i++){
        res=(res*x)%m;
    }
    return res%m;
}
int main(){
    int q,x,t;
    long y;
    cin>>q;
    int sum=0;
    while(q--){
        cin>>t;
        if(t==1){
                cin>>x>>y;
                if(x==3||x==5)continue;
                else if(x==2){
                    if(y<=3)
                    continue;
                    y-=3;
                    int a=y%4;
                    if(a==1)
                    sum++;
                    
                    sum%=2;
                }
                else if (x==4){
                    /*if(y==1)
                    continue;
                    if(y%2==0)
                    sum++;
                    */
                    
                    y%=4;
                    if(y==2||y==3)
                    sum++;
                    sum%=2;
                }
                //sum++;
        }
        else if(t==2){
            cout<<sum<<endl;
        }
    }
}
