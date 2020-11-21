#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[4][n];
        arr[0][0]=1;
        int j=3;
        for(int i=1;i<n;i++){
            arr[0][i]=arr[0][i-1]+j;
            j*=2;
        }
        for(int i=0;i<n;i++)
        arr[1][i]=arr[0][i]+1;
        
        for(int i=0;i<n;i++)
        arr[2][i]=arr[1][i]*2;
        
        for(int i=0;i<n;i++)
        arr[3][i]=arr[2][i]-arr[0][i];
        
        for(int i=0;i<4;i++){
            for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
            
            cout<<endl;
        }
    }
}
