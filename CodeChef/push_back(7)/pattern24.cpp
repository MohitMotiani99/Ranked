#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    int c=1;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            //cout<<c<<endl;
            for(int j=1;j<=2*i-1;j++){
                if(j%2==1)
                {cout<<c;c++;}
                else
                cout<<"#";
                
            }
        }
        else{
            //cout<<c<<endl;
            int newr=c+i-1;
            int nes=newr;
            for(int j=1;j<=2*i-1;j++){
                if(j%2==1)
                {cout<<newr;newr--;}
                else
                cout<<"#";
                
                
            }
            c=nes+1;
        }
        cout<<endl;
    }
}
void solve2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++)
        {
            if(j==i)
            cout<<"*";
            else
            cout<<"0";
        }
        cout<<"*";
        for(int j=1;j<=n-1;j++)
        {
            if(n-j==i)
            cout<<"*";
            else
            cout<<"0";
        }
        
        // for(int j=0;j<n-i;j++)
        // cout<<"*";
        
        // for(int j=n-i;j>=1;j--)
        // cout<<j;
        
        
        
        cout<<endl;
    }
}
void solve4(int n){
    char ch;
        if(n%2==1)
        ch='*';
        else
        ch='A';
        
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++)
        cout<<" ";
        
        
        for(int j=0;j<2*i-1;j++){
            cout<<ch;
            if(ch=='*')
            ch='A';
            else
            ch='*';
        }
        
        cout<<endl;
    }
}
void solve3(int n){
    vector<vector<char> > v(n);
    for(int i=1;i<=n/2+1;i++){
        v[i-1].push_back(i+48);
        
        for(int j=0;j<i-1;j++)
        v[i-1].push_back('*'),v[i-1].push_back(i+48);
    }
    
    int c=2;
    for(int i=n/2-1;i>=0;i--,c+=2){
        v[i+c]=v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size();j++)
        cout<<v[i][j];
        
        cout<<endl;
    }
}
void solve5(int n){
    for(int i=1;i<=n;i++){
        int gap=n-1;
        int c=0;
        int start=i;
        while(c<i){
            cout<<start;
            start+=gap;
            gap--;
            c++;
        }
        cout<<"*";
        cout<<endl;
    }
}
void solve6(int n){
    int i;
    for(i=1;i<=n/2+1;i++){
        
            if(i%2==1){
                for(int j=1;j<=i;j++)
                cout<<"*";
                
                for(int j=1;j<=n-i;j++)
                cout<<"#";
            }
            else{
                for(int j=1;j<=n-i;j++)
                cout<<"#";
                
                for(int j=1;j<=i;j++)
                cout<<"*";
            }
            
            cout<<endl;
    }

    if(i%2==0){
        i--;
    for(;i<n;i++){
        
            if(i%2==1){
                for(int j=1;j<=i;j++)
                cout<<"#";
                
                for(int j=1;j<=n-i;j++)
                cout<<"*";
            }
            else{
                for(int j=1;j<=n-i;j++)
                cout<<"*";
                
                for(int j=1;j<=i;j++)
                cout<<"#";
            }
            
            cout<<endl;
    }
    }
    else{
        i-=2;
        for(;i<n-1;i++){
        
            if(i%2==1){
                for(int j=1;j<=i;j++)
                cout<<"*";
                
                for(int j=1;j<=n-i;j++)
                cout<<"#";
            }
            else{
                for(int j=1;j<=i;j++)
                cout<<"#";
                
                for(int j=1;j<=n-i;j++)
                cout<<"*";
            }
            
            cout<<endl;
    }
    }
    
}
void solve7(int n){
    int c=1;
    for(int i=1;i<=n;i++){
        // cout<<"1";
        
        for(int j=1;j<=i;j++)
        cout<<c<<"*",c++;
        
        // cout<<".";
        
        // for(int j=1;j<=i;j++)
        // {
        //     if(j%2==1)
        //     cout<<"*";
        //     else
        //     cout<<"#";
        // }
        
        cout<<endl;
    }
}
void solve8(int n){
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        cout<<n-i+1;
        
        for(int j=1;j<=n-i;j++)
        cout<<char('A'+i-1);
        
        cout<<endl;
    }
}
void solve9(int n){
    int num=1;
    char ch='A';
    
    for(int i=1;i<=n;i++){
        if(i%2==1){
            for(int j=1;j<=i;j++)
            cout<<num,num++;
        }
        else{
            for(int j=1;j<=i;j++)
            cout<<ch,ch++;
        }
        
        cout<<endl;
    }
}
void solve10(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++)
        cout<<"_";
        
        for(int j=1;j<=n-i+1;j++)
        cout<<char('A'+j-1);
        
        cout<<endl;
    }
}
void solve11(int n){
    char dp[n][n];
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)dp[i][j]='-';
    
    int i=0;
    for(i=0;i<n;i++){
        dp[i][i]='*';
    }
    for(i=0;i<n;i++){
        dp[i][n-i-1]='*';
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cout<<dp[i][j];
        
        cout<<endl;
    }
}
void solve12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
        cout<<'*';
        
        for(int j=1;j<=i;j++)
        cout<<i+j-1;
        
        int c=2*i-1-1;
        
        for(int j=1;j<=i-1;j++)
        cout<<c-j+1;
        
        for(int j=1;j<=n-i;j++)
        cout<<'*';
        
        
        cout<<endl;
    }
}
void solve13(int n){
    for(int i=1;i<=n;i++){
         for(int sp=1;sp<=n-i;sp++)
         cout<<" ";
        
        for(int sp=1;sp<=i;sp++)
        cout<<char('A'+i-1+sp-1);
        
        //cout<<" ";
        //cout<<"*";
        
        for(int sp=1;sp<=i;sp++)
        cout<<i+sp-1;
        
        cout<<endl;
        
    }
}
void solve14(int n){
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=i;j++)
        cout<<"*";
        
        cout<<endl;
    }
    
    for(int i=1;i<=n/2+1;i++)
    cout<<char('A'+i-1);
    cout<<endl;
    
    for(int i=n/2;i>=1;i--){
        for(int j=1;j<=i;j++)
        cout<<"*";
        
        cout<<endl;
    }
    
    
}
void solve15(int n){
    char c='A';
    int flag=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(!flag)
            cout<<"*";
            else
            cout<<c,c++;
            
            flag=1-flag;
        } 
        if(n%2==0)
        flag=1-flag;
        cout<<endl;
    }
}
void solve16(int n){
    vector<vector<char> > v(n);
    for(int i=1;i<=n;i++){
        int num=2*i-1;
        if(i<=n/2+1){
        for(int j=1;j<=(n-num)/2;j++)
        v[i-1].push_back('#');
        
        for(int j=1;j<=num;j++)
        v[i-1].push_back('.');
        
        for(int j=1;j<=(n-num)/2;j++)
        v[i-1].push_back('#');
        }
        else{
            v[i-1]=v[n-i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size();j++)
        cout<<v[i][j];
        
        cout<<endl;
    }
}
void solve17(int n){
    vector<vector<char> > v(n);
    if(n%2){
        for(int i=1;i<=n;i++){
        //int num=2*i-1;
        if(i<=n/2+1){
            int j;
        for(j=1;j<=n/2 -(i-1);j++)
        v[i-1].push_back('#');
        
        
        for(int c=1;c<=n/2-1;c++)
        v[i-1].push_back('.'),j++;
        
        for(;j<=n;j++)
        v[i-1].push_back('#');
        }
        else{
            v[i-1]=v[n-i];
        }
     }
    }
    else{
       for(int i=1;i<=n;i++){
        //int num=2*i-1;
        if(i<=n/2+1){
            int j;
        for(j=1;j<=n/2 -(i-1);j++)
        v[i-1].push_back('#');
        
        
        for(int c=1;c<=n/2-1;c++)
        v[i-1].push_back('.'),j++;
        
        for(;j<=n;j++)
        v[i-1].push_back('#');
        }
        else{
            v[i-1]=v[n-i+1];
        }
     } 
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size();j++)
        cout<<v[i][j];
        
        cout<<endl;
    }
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        solve17(n);
    }
}
