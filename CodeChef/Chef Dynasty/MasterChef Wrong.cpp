#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,k1,k2;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        cin>>k1>>k2;
        int n=s.size();
        int cw=0,cl=0,cnt=0,f=0;
        for(int i=0;i<n;i++){
            if(s[i]=='W')
            cw++;
            else
            cl++;
            
            if(cw>cl){
             
             
                
            }
            else if(cw<=cl && s[i]=='L' && (i+1)%k1!=0 && (i+1)%k2!=0)
            {
                cnt++;
                s[i]='W';
                
                cl--;
                cw++;
                
                
            }
            else{
                f=1;
                break;
            }
            
        }
        if(f)
        cout<<"-1"<<endl;
        else
        cout<<cnt<<endl<<s<<endl;
        
        
    }
}
