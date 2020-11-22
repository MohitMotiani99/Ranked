#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int n=a.size();
        int i=-1;
        for(i=0;i<n;i++){
            if(a[i]!=b[i])
            break;
        }
        if(i==-1)
        cout<<"0"<<endl;
        else{
            int alt=0,st=-1,c=0,op=0;
        for(int j=i;j<n;j++){
            
            if(a[j]!=b[j] && alt==0)
            {
                cout<<"H1"<<endl;
                c++;
                if(st==-1)
                st=j;
                alt=1;
            }
            else if(a[j]==b[j] && alt==1 && j+1<n && a[j+1]!=b[j+1]){
                cout<<"H2"<<endl;
                c+=2;
                //alt=0;
                j++;
            }
            /*else if(a[i]!=b[i] && alt==1){
                
                op++;
                c=0;
                alt=0;
                st=-1;
                j--;
            }*/
            else if(a[j]==b[j] && alt==0)
            {
                cout<<"H3"<<endl;
                continue;
            }
            else if(a[j]!=b[j] && alt==1){
                cout<<"H4"<<endl;
                for(int k=st;k<st+c;k++){
                    if((k-st+1)%2==1)
                    {
                        if(a[k]=='1')
                            a[k]='0';
                        else
                            a[k]='1';
                    }
                }
                cout<<st<<" "<<c<<" ";
                cout<<a<<endl;
                op++;
                c=0;
                alt=0;
                st=-1;
                j--;
            }
            
         }
         for(int k=st;k<st+c;k++){
                    if((k-st+1)%2==1)
                    {
                        if(a[k]=='1')
                            a[k]='0';
                        else
                            a[k]='1';
                    }
                }
                cout<<st<<" "<<c<<" ";
                cout<<a<<endl;
                op++;
                c=0;
                alt=0;
                st=-1;
         cout<<op<<endl;
        }
    }
}
