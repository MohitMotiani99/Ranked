#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    
    int len,flen=0;
    string str;
    for(char i='a';i<='z';i++){
        for(char j='a';j<='z';j++){
            for(char k='a';k<='z';k++){
                len=0;
                string s3="";
                s3[0]=i;
                s3[1]=j;
                s3[2]=k;
                string x="";
                for(int p=0;p<n;p++){
                    if(s[p]==s3[len%3])
                    {
                        len++;
                        x+=s[p];
                    }
                }
                if(len>flen){
                    flen=len;
                    str=x;
                }
            }
        }
    }
    cout<<n-flen<<" "<<str<<endl;
}
