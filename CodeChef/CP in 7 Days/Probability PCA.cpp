#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int psum[n];
    psum[0]=arr[0];
    
    for(int i=1;i<n;i++)
    psum[i]=arr[i]+psum[i-1];
    
    int c=0;
    int total=(n*(n+1))/2;
    
    int i,j;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            
            if(i!=0 && psum[j]-psum[i-1]<=t)
            c++;
            else if(i==0 && psum[j]<=t)
            c++;
            else
            break;
        }
        // if(j!=n)
        // c+=(n-j-1);
    }
    
    double ans=((double)c)/total;
    //cout<<setprecision(8)<<fixed<<ans<<endl;
    
    string str=to_string(ans);
    int f=0,cnt=0;
    for(int i=0;i<str.size();i++){
        if(isdigit(str[i]) && f==1)
        cnt++;
        else if(str[i]=='.')
        f=1;
    }
    if(cnt<=8)
    cout<<ans<<endl;
    else
    cout<<setprecision(8)<<fixed<<ans<<endl;
}
