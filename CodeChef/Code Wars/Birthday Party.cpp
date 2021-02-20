#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,x,y,z;
    cin>>a>>x>>y>>z;
    int xx[x],yy[y],zz[z];
    for(int i=0;i<x;i++)
    cin>>xx[i];
    
    for(int i=0;i<y;i++)
    cin>>yy[i];
    
    for(int i=0;i<z;i++)
    cin>>zz[i];
    
    int f=0,ans=INT_MAX;
    sort(xx,xx+x);
    sort(yy,yy+y);
    sort(zz,zz+z);
    
    
    for(int i=x-1;i>=0;i--){
        for(int j=y-1;j>=0;j--){
            for(int k=z-1;k>=0;k--){
                if(a>=xx[i]+yy[j]+zz[k])
                {f=1;ans=min(ans,a-(xx[i]+yy[j]+zz[k]));break;}
            }
            if(f)
            break;
        }
        if(f)
        break;
    }
    
    
    f=0;
    
    for(int i=x-1;i>=0;i--){
        for(int j=z-1;j>=0;j--){
            for(int k=y-1;k>=0;k--){
                if(a>=xx[i]+yy[k]+zz[j])
                {f=1;ans=min(ans,a-(xx[i]+yy[k]+zz[j]));break;}
            }
            if(f)
            break;
        }
        if(f)
        break;
    }
    
    f=0;
    
    
    for(int i=y-1;i>=0;i--){
        for(int j=x-1;j>=0;j--){
            for(int k=z-1;k>=0;k--){
                if(a>=xx[j]+yy[i]+zz[k])
                {f=1;ans=min(ans,a-(xx[j]+yy[i]+zz[k]));break;}
            }
            if(f)
            break;
        }
        if(f)
        break;
    }
    
    f=0;
    
    for(int i=y-1;i>=0;i--){
        for(int j=z-1;j>=0;j--){
            for(int k=x-1;k>=0;k--){
                if(a>=xx[k]+yy[i]+zz[j])
                {f=1;ans=min(ans,a-(xx[k]+yy[i]+zz[j]));break;}
            }
            if(f)
            break;
        }
        if(f)
        break;
    }
    
    f=0;
    
    for(int i=z-1;i>=0;i--){
        for(int j=x-1;j>=0;j--){
            for(int k=y-1;k>=0;k--){
                if(a>=xx[j]+yy[k]+zz[i])
                {f=1;ans=min(ans,a-(xx[j]+yy[k]+zz[i]));break;}
            }
            if(f)
            break;
        }
        if(f)
        break;
    }
    
    f=0;
    
    for(int i=z-1;i>=0;i--){
        for(int j=y-1;j>=0;j--){
            for(int k=x-1;k>=0;k--){
                if(a>=xx[k]+yy[j]+zz[i])
                {f=1;ans=min(ans,a-(xx[k]+yy[j]+zz[i]));break;}
            }
            if(f)
            break;
        }
        if(f)
        break;
    }
    
    cout<<ans<<endl;
    
}
