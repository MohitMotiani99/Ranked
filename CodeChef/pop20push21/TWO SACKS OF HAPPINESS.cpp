#include<bits/stdc++.h>

using namespace std;

int main(){
    long n;
    
    cin>>n;
    long arr[n];
    
    for(long i=0;i<n;i++)cin>>arr[i];
    
    
    
    long lp[n],rp[n];
    long msf=INT_MIN,meh=0;
    for(long i=0;i<n;i++){
        meh=meh+arr[i];
        if(msf<meh)
        msf=meh;
        
        if(meh<0)
        meh=0;
        
        lp[i]=msf;
    }
    
    //for(int i=0;i<n;i++)
    //cout<<lp[i]<<" ";
    //cout<<endl<<endl;
    
    msf=INT_MIN;meh=0;
    for(long i=n-1;i>=0;i--){
        meh=meh+arr[i];
        if(msf<meh)
        msf=meh;
        
        if(meh<0)
        meh=0;
        
        rp[i]=msf;
    }
    
    //for(int i=0;i<n;i++)
    //cout<<rp[i]<<" ";
    //cout<<endl<<endl;
    
    long ans=INT_MIN;
    for(int i=0;i<n-1;i++){
        ans=max(ans,lp[i]+rp[i+1]);
    }
    cout<<ans<<endl;
}
