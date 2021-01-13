#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    sort(arr,arr+n,greater<int>()) ;
    
    int m=0,d;
    if(n%2==0)
    d=n/2;
    else
    d=(n+1)/2;
    
    int c=0;
    for(int i=d;i<n;i++){
        if(2*arr[i]<=arr[m]){
            c++;
            m++;
        }
    }
    
    cout<<n-c<<endl;
}
/*
16 1 4 8 2
16 8 4 2 1

d=3
m=0
c=0


i=3
    2*2<=16===>T
        c=1
        m=1

i=4
    2*1<=8===>T
        c=2
        m=2

print 5-2=3







16 10 8 4 2 1

d=3
m=0
c=0


i=3
    T
    c=1
    m=1

i=4
    T
    c=2
    m=2

i=5
    T
    c=3
    m=3
    
print 3







16 10 8 4 2 1

c=0

i=0
j=1

    F
    c=0
    j=2

i=0
j=2

    T
    c=1
    i=1
    j=3
    
i=1
j=3

    T
    c=2
    i=4
    j=5
    
i=4
j=5

    T
    c=3
    i=6
    j=7

*/
