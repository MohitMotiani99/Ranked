/*
//Brute Force

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
*/

//2d array Kadane
#include<bits/stdc++.h>
using namespace std;
int kadane(int temp[],int *start,int *finish,int m){
    int sum=0,maxsum;
    *finish=-1;
    int local_start=0;
    
    for(int i=0;i<m;i++){
        sum+=temp[i];
        if(sum<0){
            sum=0;
            local_start=i+1;
        }
        else if(sum>maxsum){
            maxsum=sum;
            *start=local_start;
            *finish=i;
        }
    }
    if(*finish!=-1)
        return maxsum;
    
        maxsum=temp[0];
        *start=*finish=0;
        for(int i=1;i<m;i++){
            if(maxsum<temp[i]){
                maxsum=temp[i];
                *start=*finish=i;
            }
        }
        return maxsum;
    
}
int main(){
    long long m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)cin>>arr[i][j];
    
    int maxsum=INT_MIN,fl,fr,ft,fb;
    int l,r;
    int temp[m];
    int start,finish;
    for(l=0;l<n;l++){
        memset(temp,0,sizeof(temp));
        for(r=l;r<n;r++){
            for(int i=0;i<m;i++)
                temp[i]+=arr[i][r];
            
            int sum=kadane(temp,&start,&finish,m);
            //cout<<"H3 "<<r<<endl;
            if(sum>maxsum){
                maxsum=sum;
                fl=l;
                fr=r;
                ft=start;
                fb=finish;
            }
            
        }
        //cout<<"H1"<<endl;
    }
    //cout<<"H2"<<endl;
    for(int i=ft;i<=fb;i++){
        for(int j=fl;j<=fr;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
