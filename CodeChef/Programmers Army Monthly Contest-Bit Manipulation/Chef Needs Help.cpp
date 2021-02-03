#include<bits/stdc++.h>

using namespace std;
#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main(){
    fastio;
    int t;
    long n;
    scanf("%d", &t);
    //vector<long> v;
    while(t--){
        scanf("%ld", &n);
        /*long ans=0;
        
        if(v.size()>=n)
        cout<<v[n]<<endl;
        else{
        if(v.size()!=0)
        ans=v[v.size()-1];
        
        for(int i=v.size();i<=n;i++){
            
            ans^=i;
            v.push_back(ans);
        }
        // for(long i:v)
        // cout<<i<<" ";
        // cout<<endl;
        cout<<v[n]<<endl;
        }
        */
        
        int rem=n%4;
        
        if(rem==1)
        n=1;
        else if(rem==2)
        n++;
        else if(rem==3)
        n=0;
        
        printf("%ld \n",n);
    }
}
