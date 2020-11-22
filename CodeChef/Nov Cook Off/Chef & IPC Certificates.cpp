#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k,x;
    cin>>n>>m>>k;
    int arr[n][2];
    for(int i=0;i<n;i++){
        long sum=0;
        for(int j=0;j<k;j++){
            cin>>x;
            sum+=x;
        }
        arr[i][0]=sum;
        cin>>arr[i][1];
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i][0]>=m && arr[i][1]<=10)
        c++;
    }
    cout<<c<<endl;
}
