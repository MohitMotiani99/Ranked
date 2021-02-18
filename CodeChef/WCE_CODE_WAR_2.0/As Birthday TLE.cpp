#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int arr[n];
        int maxi=INT_MIN;
        
        for(int i=0;i<n;i++){
        cin>>arr[i];
        maxi=max(maxi,arr[i]);
        }
        
        int sum=0;
        int i;
        for(i=maxi;i>=0;i--){
            sum=0;
            for(int j=0;j<n;j++){
                sum+=max(0,arr[j]-i);
            }
            if(sum>=k)
            break;
        }
        cout<<i<<endl;
    }
}
