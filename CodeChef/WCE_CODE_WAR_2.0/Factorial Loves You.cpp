#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long n,m;
    // cin>>t;
    // cin>>m;
    
    scanf("%d", &t);
    scanf("%ld", &m);
    
    vector<long> v;
    
    while(t--){
        //cin>>n;
        scanf("%ld", &n);
        if(v.size()==0){
            v.push_back(1);
            for(int i=1;i<=n;i++)
            v.push_back((i*v[i-1])%m);
            
            //cout<<v[n]<<" ";
            printf("%ld ", v[n]);
        }
        else if(n>=v.size())
        {
            
            for(int i=v.size();i<=n;i++)
            v.push_back((i*v[i-1])%m);
            
            //cout<<v[n]<<" ";
            printf("%ld ", v[n]);
        }
        else
        {//cout<<v[n]<<" ";
        printf("%ld ", v[n]);
        }
        
        int i;
        for(i=1;i<m;i++){
            if((i*v[n])%m==1)
            break;
        }
        
        //cout<<i<<endl;
        printf("%ld\n", i);
    }
}
