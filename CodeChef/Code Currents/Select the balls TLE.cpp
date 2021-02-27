#include<bits/stdc++.h>
#define mod (long)(pow(10,9)+7)
using namespace std;
int main(){
    int t,n,q,l,r,k;
    cin>>t;
    while(t--){
        cin>>n>>q;
        vector<int> arr(n);
        for(int i=0;i<n;i++)arr[i]=i+1;
        
        while(q--){
            cin>>l>>r>>k;
            vector<int> temp(n,0);
            temp[0]=1;
            int oc=k;
            //cout<<temp[0]<<"  ";
            for(int i=1;i<n;i++){
                int oc2=oc;
                //cout<<oc<<"       ";
                for(int j=1;j<=i+1;j++,oc2-=(k-1))
                temp[i]=(temp[i]%mod+(j*oc2)%mod)%mod;
                
                oc+=(k-1);
                //cout<<oc<<"    ";
                
                //cout<<temp[i]<<"  ";
                
            }
            //cout<<endl;
            
            // while(k--){
            //     for(int i=1;i<n;i++)
            //     temp[i]=(temp[i]%mod+temp[i-1]%mod);
            // }
            long sum=0;
            for(int i=l-1;i<r;i++)
            sum=(sum%mod+temp[i]%mod)%mod;
            
            cout<<sum<<endl;
        }
    }
}
