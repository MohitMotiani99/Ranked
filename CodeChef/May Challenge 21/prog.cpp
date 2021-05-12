#include<bits/stdc++.h>
using namespace std;

//global
//th
int child[]


void xe(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<pow(2,n-1)<<endl;
    }
}
void tt(){
    int t;
    cin>>t;
    
    while(t--){
        bool left=false;
        
        char arr[3][3];
        for(int i=0;i<3;i++)for(int j=0;j<3;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='_')
                left=true;
        }
        
        int c=0;
        if((arr[0][0]==arr[0][1] && arr[0][1]==arr[0][2]) && (arr[0][0]=='X' || arr[0][0]=='O'))
        c++;
        
        if((arr[1][0]==arr[1][1] && arr[1][1]==arr[1][2]) && (arr[1][0]=='X' || arr[1][0]=='O'))
        c++;
        
        if((arr[2][0]==arr[2][1] && arr[2][1]==arr[2][2]) && (arr[2][0]=='X' || arr[2][0]=='O'))
        c++;
        
        if((arr[0][0]==arr[1][0] && arr[1][0]==arr[2][0]) && (arr[0][0]=='X' || arr[0][0]=='O'))
        c++;
        
        if((arr[0][1]==arr[1][1] && arr[1][1]==arr[2][1]) && (arr[0][1]=='X' || arr[0][1]=='O'))
        c++;
        
        if((arr[0][2]==arr[1][2] && arr[1][2]==arr[2][2]) && (arr[0][2]=='X' || arr[0][2]=='O'))
        c++;
        
        if((arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2]) && (arr[0][0]=='X' || arr[0][0]=='O'))
        c++;
        
        if((arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0]) && (arr[0][2]=='X' || arr[0][2]=='O'))
        c++;
        
        
        
        if(c==0){
            if(left==true)
            cout<<"2"<<endl;
            else
            cout<<"1"<<endl;
        }
        else if(c==1)
            cout<<"1"<<endl;
        else
            cout<<"3"<<endl;
    }
}
void me(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int c=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                if(m%i==(m%j)%i)c++;
            }
        }
        
        cout<<c<<endl;
    }
}

int main(){
    //xe();
    //tt();
    //me();
    th();
}
