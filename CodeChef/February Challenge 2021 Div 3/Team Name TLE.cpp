#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    //cin>>t;
    scanf("%d", &t);
    while(t--){
        //cin>>n;
        scanf("%d", &n);
        string arr[n];
        unordered_map<string,bool> m;
        for(int i=0;i<n;i++)cin>>arr[i],m[arr[i]]=true;
        
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                string a=arr[i];
                string b=arr[j];
                char temp=a[0];
                a[0]=b[0];
                b[0]=temp;
                
                if(m[a]==false && m[b]==false)
                c+=2;
            }
        }
        //cout<<c<<endl;
        printf("%d \n", c);
    }
}
