#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int out[n];
        for(int i=0;i<n;i++){
            if(arr[i]-1<n)
            out[i]=arr[i]+arr[arr[i]-1];
            else{
                int x=arr[i];
                while(x>=n)
                x/=2;
                
                x=n-x;
                out[i]=arr[x-1];
            }
        }
        for(int i=0;i<n;i++)
        cout<<out[i]<<" ";
        cout<<endl;
    }
}
