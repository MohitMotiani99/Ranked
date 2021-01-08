#include<bits/stdc++.h>
using namespace std;
bool distchar(string s){
    int arr[26]={0};
    for(int i=0;i<s.size();i++){
    arr[s[i]-97]++;
    if(arr[s[i]-97]>1)
    return false;
    }
    return true;
}
int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        
        if(s.size()==1)
        cout<<"1"<<endl;
        else{
        
        while(!distchar(s)){
        //cout<<"Before: "<<s<<"  ";
        string ans="";
        for(int i=0;i<s.size();i++){
            if(i!=s.size()-1 && s[i]==s[i+1])
            i++;
            else
            ans+=s[i];
            
        }
        s=ans;
        //cout<<"After: "<<s<<"  ";
        }
        cout<<s.size()<<endl;
        /*
        for(int i=0;i<s.size()-1;i++){
            cout<<"Before: "<<i<<"  "<<s<<"  ";
            if(s[i]==s[i+1]){
                if(i+2<s.size())
                s=s.substr(0,i)+s.substr(i+2);
                else
                s=s.substr(0,i);
                
                i--;
            }
            cout<<"After: "<<i<<"  "<<s<<endl;
        }
        cout<<s<<"   ";
        cout<<s.size()<<endl;
        */
        }
    }
}
