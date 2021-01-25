#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    int k1,k2;
    cin>>t;
    
    while(t--){
        cin>>s;
        cin>>k1>>k2;
        stack<int> st;
        
        int cw=0,cl=0;
        int f=0,cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L' && (i+1)%k1!=0 && (i+1)%k2!=0)
            st.push(i);
        
            if(s[i]=='W')
            cw++;
            else
            cl++;
            
            if(cw<=cl){
              if(st.size()!=0){
              s[st.top()]='W';
              cw++;
              cl--;
              cnt++;
              st.pop();
              }
              else
              {
                  f=1;
                  break;
              }
            }
        }
        if(f)
        cout<<"-1"<<endl;
        else
        cout<<cnt<<endl<<s<<endl;
        
    }
}
