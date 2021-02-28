#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.first<b.first;
}
bool cmp2(int a,int b){
    return mp[a]<mp[b];
}
void solve(){
    int n,m,k,x;
    scanf("%d", &n);
    scanf("%d", &m);
    //cin>>n>>m;
    
    pair<int,int> arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &x);
        //cin>>x;
        mp[i+1]=x;
    }
    // for(auto i:mp){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    //sort(arr,arr+n,cmp);
    pair<int,int> stud[n];
    for(int i=0;i<m;i++){
        scanf("%d", &stud[i].first);
        //cin>>stud[i].first;
        stud[i].second=i+1;
    }
    sort(stud,stud+m,cmp);
    // cout<<endl;
    // for(int i=0;i<m;i++){
    //     cout<<stud[i].first<<" "<<stud[i].second<<"    ";
    // }
    // cout<<endl;
    
    
    vector<vector<int> > pref(m);
    for(int i=0;i<m;i++){
        scanf("%d", &k);
        //cin>>k;
        for(int j=0;j<k;j++)
        {
            scanf("%d", &x);
            //cin>>x;
            pref[i].push_back(x);
        }
        sort(pref[i].begin(),pref[i].end(),cmp2);
    }
    // cout<<endl;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<pref[i].size();j++)
    //     cout<<pref[i][j]<<" ";
    //     cout<<endl;
    // }
    bool vis[n];
    memset(vis,false,sizeof(vis));
    int i,j;
    bool coll=true;
    for(i=0;i<m;i++){
        for(j=0;j<pref[stud[i].second-1].size();j++){
            if(!vis[pref[stud[i].second-1][j]-1])
            {
                
                vis[pref[stud[i].second-1][j]-1]=true;break;
                
                
            }
        }
        if(stud[i].second==1 ){
            if(j==pref[stud[i].second-1].size())
            coll=false;
            break;
        }
        
    }
    
    if(coll)
    printf("%d\n", pref[stud[i].second-1][j]);//cout<<pref[stud[i].second-1][j]<<endl;
    else
    printf("0\n");//cout<<"0"<<endl;
    
    
    
    mp.clear();
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
