#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,q,l,r,x,ch;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        cin>>q;
        while(q--){
            cin>>ch;
            if(ch==1){
                cin>>l>>r;
                for(int i=l-1;i<r;i++)
                arr[i]=(arr[i]+1)%3;
            }
            else if(ch==2){
                cin>>l>>r>>x;
                int c=0;
                for(int i=l-1;i<r;i++){
                    if(arr[i]==x)
                    c++;
                }
                cout<<c<<endl;
            }
        }
    }
}
