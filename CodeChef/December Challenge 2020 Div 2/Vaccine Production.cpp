#include<bits/stdc++.h>
using namespace std;
int main(){
    float d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    
    int ans;
    
    if(d1<d2){
        if(d1+ceil(p/v1)-1<d2)
            ans=d1+ceil(p/v1)-1;
        else
            ans=d1+(d2-d1)+ceil((p-(d2-d1)*v1)/(v1+v2))-1;
    }
    else{
        if(d2+ceil(p/v2)-1<d1)
            ans=d2+ceil(p/v2)-1;
        else
            ans=d2+(d1-d2)+ceil((p-(d1-d2)*v2)/(v1+v2))-1;
    }
    
    cout<<ans<<endl;
}
