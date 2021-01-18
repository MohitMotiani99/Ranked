#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int s=n/2-1;
        int col=s+n/2;
        int r=n;
        int c=1;
        //cout<<r<<" "<<col<<endl;
        int space =n/2;
        int dp[r][c];
        for(int i=0;i<r;i++){
            if(i==n/2 + 1)
            space=1;
            int k=0;
            for(int j=0;j<col;j++){
                if(j<space)
                cout<<" ";
                else if(k==s)
                cout<<" ";
                else
                {cout<<c;k++;}
                
                //cout<<dp[i][j]<<" ";
            }
            c++;
            if(i<=n/2)
            space--;
            else
            space++;
            cout<<endl;
        }
        
        
        
    }
}
