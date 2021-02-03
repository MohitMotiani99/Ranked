#include<bits/stdc++.h>
using namespace std;

typedef pair<double,double> pii;

double slope(pii a,pii b){
    if(a.first==0 && b.first==0)
    return INT_MAX;
    
    return (a.second-b.second)/(a.first-b.first);
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        pii a,b,c,d;
        cin>>a.first>>a.second>>b.first>>b.second>>c.first>>c.second>>d.first>>d.second;
        
        double m1=slope(a,b);
        double m2=slope(c,d);
        
        if(abs(m1)==abs(m2))
        cout<<"NO"<<endl;
        else
        {
            double in=a.second-m1*a.first;
            
            double a1=c.second-m1*c.first-in;
            double a2=d.second-m1*d.first-in;
            
            if(a1*a2>0)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
    }
}
