#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
    int as=a.size(),bs=b.size();
    int i,j;
    for( i=as-1,j=bs-1;i>=0 && j>=0;i--,j--){
        if(a[i]==b[j])
        continue;
        else if(a[i]>b[j])
        return false;
        else
        return true;
    }
    if(i==-1)
    return true;
    else
    return false;
}
int main(){
    int t,n;
    cin>>t;
    for(int p=1;p<=t;p++){
        cin>>n;
        string arr[n];
        //long x;
        for(int i=0;i<n;i++){
            //cin>>x;
            //arr[i]=to_string(x);
            cin>>arr[i];
            reverse(arr[i].begin(),arr[i].end());
        }
        sort(arr,arr+n);
        cout<<"Case "<<p<<":"<<endl;
        for(int i=0;i<n;i++)
        {
            reverse(arr[i].begin(),arr[i].end());
            cout<<arr[i]<<endl;
        }
        //cout<<endl;
    }
}
