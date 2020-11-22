//binary search for largest min distance//

#include<bits/stdc++.h>
using namespace std;
bool isFeasble(long arr[],int n,int k,int mid){
    int pos=arr[0];
    int childr=1;
    for(int i=1;i<n;i++){
        if(arr[i]-pos>=mid){
            pos=arr[i];
            childr++;
            
            if(childr==k)
                return true;
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    int n,k;
    while(t--){
        cin>>n>>k;
        long arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        
        int l=1,r=arr[n-1];
        int res=-1;
        while(l<r){
            int mid=(l+r)/2;
            if(isFeasble(arr,n,k,mid)){
                res=max(res,mid);
                l=mid+1;
            }
            else
                r=mid;
        }
        cout<<res<<endl;
    }
}
