#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    sort(arr,arr+n,greater<int>());
    if(n==1)
    cout<<"1"<<endl;
    else{
        //map<int,int> m;
        bool vis[n];
        for(int i=0;i<n;i++)
        vis[n]=false;
        int c=0;
        int i,j;
        for(i=0,j=1;i<n && j<n;){
            //cout<<i<<" "<<j<<endl;
            //cout<<"Before: ";
            //cout<<i<<" "<<j<<"    ";
            if(arr[i]>=(2*arr[j])){
                //m[i]=j;
                vis[j]=vis[i]=true;
                c++;
                while(vis[i]==true)
                i++;
                while(vis[j]==true || i==j)
                j++;
            }
            else
                j++;
            
            //cout<<"After: ";
            //cout<<i<<" "<<j<<endl;
        }
        //cout<<i<<endl;
        
        cout<<n-c<<endl;
    }
}
