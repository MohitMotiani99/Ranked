#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    sort(arr,arr+n);
    if(n==1)
    cout<<"1"<<endl;
    else{
        //map<int,int> m;
        //bool vis[n];
        //for(int i=0;i<n;i++)
        //vis[n]=false;
        int c=0;
        for(int i=n-1,j=n-2;j>=0;){
            if(arr[i]>=(2*arr[j])){
                //m[i]=j;
                //vis[j]=true;
                c++;
                i=j-1;
                j--;
            }
            else
                j--;
        }
        cout<<n-c<<endl;
    }
}
