#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int sp,int ep){
    bool allneg=true;
    for(int i=sp;i<=ep;i++){
        if(arr[i]>0)
        {allneg=false;break;}
    }
    if(allneg){
        int maxr=arr[sp];
        for(int i=sp;i<=ep;i++){
            if(arr[i]>maxr)
            maxr=arr[i];
        }
        return maxr;
    }
    int sm=INT_MIN,mtn=0;
    int start,beg,end;
    for(int i=sp;i<=ep;i++){
        mtn=mtn+arr[i];
        if(mtn<0)
        {
            mtn=0;
            beg=i+1;
        }
        
        if(sm<mtn){
            sm=mtn;
            start=beg;
            end=i;
        }
    }
    return sm;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int ans=INT_MIN;
    for(int i=0;i<n-1;i++){
        int p1=kadane(arr,0,i);
        int p2=kadane(arr,i+1,n-1);
        
        ans=max(ans,p1+p2);
        //cout<<i<<"    "<<p1<<" "<<p2<<endl;
        
        
    }
    cout<<ans<<endl;
}
