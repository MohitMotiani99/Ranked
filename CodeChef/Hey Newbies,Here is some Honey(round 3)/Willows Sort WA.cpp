#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<long,pair<int,string> > a,pair<long,pair<int,string> > b){
    return a.second.second<b.second.second;
    
}
int main(){
    int t,n;
    cin>>t;
    for(int r=0;r<t;r++){
        cin>>n;
        //long arr[n];
        pair<long,pair<int,string> > arr[n];
        int brr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i].first;
            brr[i]=arr[i].first;
            arr[i].second.first=i;
            string a=to_string(arr[i].first);
            
            //reverse(a.begin(),a.end());
            arr[i].second.second=a;
            
        }
        int minl=INT_MAX;
        for(int i=0;i<n;i++){
            minl=min(minl,(int)(arr[i].second.second).size());
        }
        long divi=pow(10,minl);
        for(int i=0;i<n;i++){
            (arr[i].first)%=divi;
            string a=to_string(arr[i].first);
            
            reverse(a.begin(),a.end());
            arr[i].second.second=a;
        }
        /*for(int i=0;i<n;i++)
        cout<<arr[i].first<<"  "<<arr[i].second.first<<"  "<<arr[i].second.second<<endl;
        */
        sort(arr,arr+n,cmp);
        cout<<"Case "<<r+1<<":"<<endl;
        for(int i=0;i<n;i++)
        cout<<brr[arr[i].second.first]<<endl;
    }
}
