#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)cin>>arr[i][j];
    
    int max=INT_MIN;
    int sr,sc,rs,cs;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            for(int k=0;k<=m-i;k++){
                for(int l=0;l<=n-j;l++){
                    int sum=0;
                    for(int p=k;p<k+i;p++){
                        for(int q=l;q<l+j;q++)
                        sum+=arr[p][q];
                    }
                    if(max<sum)
                    {max=sum;
                    sr=k;sc=l;rs=i;cs=j;}
                }
            }
        }
    }
    
    for(int i=sr;i<sr+rs;i++){
        for(int j=sc;j<sc+cs;j++)
        cout<<arr[i][j]<<" ";
        
        cout<<endl;
    }
        
}
