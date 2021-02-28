#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        bool prime[n+1];
        //memset(prime,true,sizeof(prime));
        for(int i=0;i<=n;i++)prime[i]=true;
        for(int i=2;i<=n;i++){
            if(prime[i]){
                for(int j=i*i;j<=n;j+=i)
                prime[j]=false;
            }
        }
        int n2=n;
        
            for(int i=n;i>=2;i--){
                for(int j=i-1;j>=2;j--){
                    if(((prime[i] && prime[j])||(prime[j] && i==j*j)) && (n2%(i*j))==0 && ((n2/(i*j))%(i*j))==0){
                    n2/=(i*j);
                    n2/=(i*j);
                    }
                    cout<<n2<<"  ";
                }
                cout<<endl;
                
            }
            
            int c=0;
            for(int i=1;i<=n2;i++)
            {
                if(n2%i==0)
                c++;
            }
        cout<<c<<endl;
    }
}
