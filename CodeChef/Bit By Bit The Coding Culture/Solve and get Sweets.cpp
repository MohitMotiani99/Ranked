#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n],brr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            brr[i]=~arr[i]+1-arr[i];
            if(arr[i]==0) brr[i]=1;
        }
        int msf=0,meh=0;
        for(int i=0;i<n;i++){
            meh+=brr[i];
            msf=max(msf,meh);
            if(meh<0)meh=0;
        }
        cout<<sum+msf<<endl;
    }
}
