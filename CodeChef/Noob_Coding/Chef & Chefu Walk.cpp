#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s1,s2;
    //map<char,int> m;
    int arr[26]={0};
    cin>>t;
    while(t--){
        cin>>s1>>s2;
        for(int i=0;i<s1.size()-1;i++){
            //if(m.find(s1[i])!=m.end())
            //m[s1[i]]++;
            arr[s1[i]-97]++;
            //else
            //m.insert({s1[i],1});
        }
        //cout<<"x"<<endl;
        int max=INT_MIN;
        for(int i=0;i<26;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        for(int i=0;i<26;i++){
            arr[i]=0;
        }
        string dir;
        switch(s1[s1.size()-1]){
            case 'e':
                dir="east";
                break;
            case 'w':
                dir="west";
                break;
            case 'n':
                dir="north";
                break;
            case 's':
                dir="south";
                break;
        }
        cout<<max<<" "<<dir<<" ";
        //m.clear();
        for(int i=0;i<s2.size()-1;i++){
            arr[s2[i]-97]++;
        }
        max=INT_MIN;
        for(int i=0;i<26;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        switch(s2[s2.size()-1]){
            case 'e':
                dir="east";
                break;
            case 'w':
                dir="west";
                break;
            case 'n':
                dir="north";
                break;
            case 's':
                dir="south";
                break;
        }
        cout<<max<<" "<<dir<<endl;
    }
    
}
