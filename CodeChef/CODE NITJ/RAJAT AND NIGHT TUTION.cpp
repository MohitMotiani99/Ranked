#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long a,b,c,r;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>r;
        long p=a;
        long q=b;
        
        a=min(p,q);
        b=max(p,q);
        long lt=c-r;
        long minr=min(a,min(b,lt));
        a+=minr;
        b+=minr;
        c+=minr;
        
        lt=c-r;
        long rt=c+r;
        
        long s=max(a,max(b,rt))+1;
        bool arr[s];
        for(int i=0;i<s;i++)
        arr[s]=false;
        
        for(int i=0;i<s;i++){
            if(i>=lt && i<=rt)
            arr[s]=true;
        }
        for(int i=0;i<s;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
        long g=0;
        for(int i=0;i<s;i++){
            if(i>=a && i<=b && arr[i]==false)
            g++;
        }
        cout<<g<<endl;
    }
}
