#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    int n,cnt;
    string s;
    while(t--){
        scanf("%d", &n);
        scanf("%d", &cnt);
        cin>>s;
        
        //string t="";
        string s2=s;
        bool poss=false;
        // for(int p=n-1;p>=0;p--){
        // s=s2.substr(p)+s2.substr(0,p);
        // int c=0;
        // int oc=0;
        // int f=0;
        // for(int i=0;i<n;i++){
        //     if(s[i]=='0'){
        //         if(oc==0)
        //         continue;
        //         else
        //         c++;
        //     }
        //     else if(s[i]=='1'){
        //         if(oc==0)
        //         oc++;
        //         else if(oc==1){
        //             if(c>cnt)
        //             {f=1;break;}
        //             else
        //             c=0;
        //         }
                
        //     }
        // }
        // if(!f){
        // poss=true;
        // break;
        // }
        // }
        
        int c=0;
        int oc=0;
        int f=0;
        int wr=0;
        int f1=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                f1=i;
                break;
            }
        }
        if(f1==-1)
        printf("YES\n");
        else{
        for(int i=f1;i<n;i++){
            if(s[i]=='0'){
                // if(oc==0)
                // continue;
                // else
                c++;
            }
            else if(s[i]=='1'){
                
                //else if(oc==1){
                    if(c>cnt && wr==0)
                    wr=1,c=0;
                    if(c>cnt && wr==1)
                    {f=1;break;}
                    else
                    c=0;
                    if(oc==0)
                    oc=1;
                //}
                
            }
        }
        if(!f && (f1+c<cnt || (f1+c>=cnt && wr==0)))
        printf("YES\n");//cout<<"YES"<<endl;
        else
        printf("NO\n");//cout<<"NO"<<endl;
        }
        
    }
}
