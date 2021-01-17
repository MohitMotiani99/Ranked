#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1)
        cout<<"1"<<endl;
        else{
            cout<<n<<endl;
            //cout<<"H"<<endl;
            int dp[n][n];
            int c=n*n;
            int k=0;
            while(c>0){
                if(c==0){
                    break;
                }
                for(int i=k;i<n-k;i++)
                {dp[k][i]=c;c--;
                //cout<<dp[k][i]<<" ";
                    
                }
                //cout<<endl;
                
                if(c==0){
                    break;
                }
                for(int i=1+k;i<n-k;i++)
                {dp[i][n-1-k]=c;c--;
                
                //cout<<dp[i][n-1-k]<<" ";
                }
                //cout<<endl;
                
                if(c==0){
                    break;
                }
                for(int i=1+k;i<n-k;i++)
                {dp[n-1-k][n-i-1]=c;c--;
                //cout<<dp[n-1-k][n-i-1]<<" ";
                    
                }
                //cout<<endl;
                
                if(c==0){
                    break;
                }
                for(int i=1+k;i<n-k;i++)
                {dp[n-i-1][k]=c;c--;//
                //cout<<dp[n-i-1][k]<<" ";
                    
                }
                //cout<<endl;
                
                k++;
                
            }
            //cout<<"H2"<<endl;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++)
                cout<<dp[i][j]<<" ";
                
                cout<<endl;
            }
        }
    }
}
