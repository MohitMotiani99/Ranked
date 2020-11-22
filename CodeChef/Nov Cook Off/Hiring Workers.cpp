#include<bits/stdc++.h>
using namespace std;
bool isp(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)
            return false;
    }
    return true;
}
int main(){
    int t,x,k;
    cin>>t;
    while(t--){
        cin>>k>>x;
        int c=0,sum=0;
        for(int i=x;i>=2;i--){
            if(x>1 && isp(i) && c<k-1){
                while(x%i==0){
                
                sum+=i;
                c++;
                if(c==k-1)
                break;
                x/=i;
                }
            }
            if(x==1)
            break;
            if(x>1 && c==k-1){
                sum+=
            }
        }
        if(k>c)
        sum+=(k-c);
        cout<<c<<" "<<sum<<endl;
    }
}
