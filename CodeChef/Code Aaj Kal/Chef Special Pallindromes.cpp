#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
            cin.ignore();

    while(t--){
        //cin.getline(s,10000);
        //scanf(" %[^\n]s",s);
        //fgets(s);
            string s;

        getline(cin,s);
        
        //cout<<s<<endl;
        string ans="";
        int i;
        int f=0;
        for(i=0;i<s.size();i++){
            if(isalpha(s[i]))
            ans+=tolower(s[i]);
            else if(isdigit(s[i]))
            {f=1;break;}
        }
        
        //cout<<ans<<endl;
        
        if(f)
        cout<<"NO"<<endl;
        else{
        string a=ans;
        
        
        reverse(a.begin(),a.end());
        
        //cout<<a<<endl;
        if(ans==a)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
    }
}
