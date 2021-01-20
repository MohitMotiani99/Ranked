#include<bits/stdc++.h>
using namespace std;
int setbits(long long a){
    int ans=0;
    while(a!=0){
        if(a%2==1)
        ans++;
        a/=2;
    }
    //reverse(ans.begin(),ans.end());
    
    return ans;
}
int main(){
    int t;
    long long a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int x=floor(log2(a));
        int y=floor(log2(b));
        
        double bx=log2(b+1);
        int by=floor(log2(b+1));
        
        
        if(bx==by)
        cout<<b<<endl;
        else if(x!=y){
        //cout<<pow(2,y)-1<<endl;
        int xans=setbits(pow(2,y)-1);
        long long c=b-1;
                int cans=setbits(c);
                int bans=setbits(b);
                
                if(bans>cans)
                {
                    if(bans>xans)
                    cout<<b<<endl;
                    else
                    cout<<pow(2,y)-1<<endl;
                }
                else if(cans>bans){
                    if(cans>xans)
                    cout<<c<<endl;
                    else
                    cout<<pow(2,y)-1<<endl;
                }
                else{
                    if(bans>xans)
                    cout<<c<<endl;
                    else
                    cout<<pow(2,y)-1<<endl;
                }
                //cout<<c<<endl;
        }
        else if(x==y){
                long long c=b-1;
                int cans=setbits(c);
                int bans=setbits(b);
                
                if(bans>cans)
                cout<<b<<endl;
                else
                cout<<c<<endl;
        }
    }
}
