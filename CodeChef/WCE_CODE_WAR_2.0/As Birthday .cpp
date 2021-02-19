#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    //cin>>t;
    scanf("%d", &t);
    while(t--){
        //cin>>n>>k;
        scanf("%d", &n);
        scanf("%d", &k);
        int arr[n];
        int maxi=INT_MIN;
        
        
        
        for(int i=0;i<n;i++){
            //cin>>arr[i];
            scanf("%d", &arr[i]);
            maxi=max(maxi,arr[i]);
        
        }
        
        
        
        int sum=0;
        // int i;
        // for(i=maxi;i>=0;i--){
        //     sum=0;
        //     for(int j=0;j<n;j++){
        //         sum+=max(0,arr[j]-i);
        //     }
        //     if(sum>=k)
        //     break;
        // }
        // cout<<i<<endl;
        
        int low=0,high=maxi,mid,ans;
        while(low<=high){
            sum=0;
            mid=(low+high)/2;
            
            for(int j=0;j<n;j++){
               sum+=max(0,arr[j]-mid);
            }
            if(sum>k)
            low=mid+1,ans=mid;
            else if(sum<k)
            high=mid-1;
            else if(sum==k)
            {ans=mid;break;}
        }
        //cout<<ans<<endl;
        printf("%d\n", ans);
    }
}
