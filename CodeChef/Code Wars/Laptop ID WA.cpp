#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    // int arr[26]={0};
    
    bool valid=true;
    map<char,int> m2;
    
    int oc=0;
    
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i]))
        m2[s[i]]++;
        else
        oc++;
    }
    
    
    // for(int i=0;i<s.size();i++)
    // arr[s[i]-'a']++;
    
    if(oc==0){
    
    map<int,set<char> > m;
    for(auto i:m2){
        m[i.second].insert(i.first);
    }
    // for(int i=0;i<26;i++)
    // {
    //     if(arr[i]!=0)
    //     m[arr[i]].insert(char(i+'a'));
    // }
    
    
    // for(auto i:m){
    //     cout<<i.first<<"          ";
    //     for(auto j:i.second)
    //     cout<<j<<" ";
        
    //     cout<<endl;
    // }
    
    
    //
    
    
    if(m.size()==1)
    {
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
    else if(m.size()==2){
        auto it=m.begin();
        auto it2=it;
        it2++;
        
        if(it->first+1==it2->first && (it2->second).size()==1)
        {
            set<char> st=it->second;
            st.insert(*((it2->second).begin()));
            for(auto i:st)
            cout<<i;
            
            cout<<endl;
            
        }
        else
        cout<<"The string is invalid"<<endl;
    }
    else
    cout<<"The string is invalid"<<endl;
    }
    else if(oc==1){
        map<int,set<char> > m;
    for(auto i:m2){
        m[i.second].insert(i.first);
    }
    // for(int i=0;i<26;i++)
    // {
    //     if(arr[i]!=0)
    //     m[arr[i]].insert(char(i+'a'));
    // }
    
    
    // for(auto i:m){
    //     cout<<i.first<<"          ";
    //     for(auto j:i.second)
    //     cout<<j<<" ";
        
    //     cout<<endl;
    // }
    
    
    //
    
    
    if(m.size()==1)
    {
        sort(s.begin(),s.end());
        s=s.substr(1);
        cout<<s<<endl;
    }
    else   
        cout<<"The string is invalid"<<endl;
        

    }
    else
    cout<<"The string is invalid"<<endl;
    
    // int f=0;
    // sort(arr,arr+26);
    // if(arr[25]==arr[24]+1){
    //     for(int i=23;i>=0;i--){
    //         if(arr[i]==0)
    //         break;
    //         else if(arr[i]!=arr[24])
    //         {valid=false;break;}
    //     }
    //     if(valid){
            
    //     }
        
    // }
    // else if(arr[25]==arr[24]){
    //     for(int i=23;i>=0;i--){
    //         if(arr[i]==0)
    //         break;
    //         else if(arr[i]!=arr[24])
    //         {valid=false;break;}
    //     }
    // }
    
} 
