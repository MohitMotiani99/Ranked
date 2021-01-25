#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,w;
    cin>>n>>m>>w;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    int mini=arr[0],maxi=arr[0];
    for(int i=1;i<n;i++){
        mini=(arr[i]<mini)?arr[i]:mini;
        maxi=(arr[i]>maxi)?arr[i]:maxi;
    }
    int ht=mini+m;
    if(ht<=maxi);
    else ht=maxi;
    cout<<ht<<endl;
}
