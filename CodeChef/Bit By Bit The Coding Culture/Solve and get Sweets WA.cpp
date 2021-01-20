#include<bits/stdc++.h>
using namespace std;
int compl1(int a){
    //cout<<a<<" ";
    bool neg=false;
    if(a<0)
    {
        a=abs(a);
        neg=true;
    }
    string ans="";
    while(a!=0){
        ans+=(a%2 + 48);
        a/=2;
    }
    //cout<<ans<<"  ";
        
    
    //cout<<ans<<"  ";
    reverse(ans.begin(),ans.end());

    //cout<<ans<<"  ";
    if(neg){
        
        for(int i=0;i<ans.size();i++)
        {
        if(ans[i]=='0')
        ans[i]='1';
        else
        ans[i]='0';
        }
    //cout<<ans<<"  ";
        
        char c='1';
        for(int i=ans.size()-1;i>=0;i--){
            if(ans[i]=='1' && c=='1')
            {ans[i]='0';c='1';}
            else if((ans[i]=='0' || c=='0' ) && !(ans[i]=='0' && c=='0'))
            {ans[i]='1';c='0';}
            else
            {ans[i]='0';c='0';}
        }
        if(c=='1')
        ans=c+ans;
        
        
        
    }
    //cout<<ans<<" ";
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]=='0')
        ans[i]='1';
        else
        ans[i]='0';
    }
    //cout<<ans<<"  ";
    
    int x=0;
    int n=ans.size();
    //cout<<n<<"  ";
    for(int i=0;i<n;i++){
        if(ans[i]=='1')
        x+=(pow(2,n-i-1));
    }
    //cout<<x<<endl;
    return x;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        int carr[n];
        long sumt=0;
        for(int i=0;i<n;i++){cin>>arr[i];sumt+=arr[i];}
        for(int i=0;i<n;i++){
            carr[i]=compl1(arr[i])+1;
            //cout<<carr[i]<<" ";
        }
        //cout<<endl;
        int msf=INT_MIN,meh=0,msf2=0;
        int start,end,beg=0,len=0;
        for(int i=0;i<n;i++){
            meh=meh+carr[i];
            //len++;
            if(msf<meh){
            start=beg;
            end=i;
            msf=meh;
            //msf2=msf+len;
            //len=0;
            }
            
            if(meh<0){
            meh=0;
            //len=0;
            beg=i+1;
            }
        }
        //cout<<endl;
        //cout<<msf<<" "<<start<<" "<<end<<endl;
        
        long sum=0;
        for(int i=0;i<n;i++){
            if(i<start || i>end)
            sum+=arr[i];
        }
        
        
        
        cout<<max(sumt,sum+msf)<<endl;
    }
}
