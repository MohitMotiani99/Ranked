#include<bits/stdc++.h>
using namespace std;
int bfs(vector<vector<int> > arr,int a,int b,vector<vector<bool> >& vis,int h,int w){
    queue<pair<int,int> > q;
    q.push({a,b});
    int cnt=0;
    while(!q.empty()){
        pair<int,int> p=q.front();
        q.pop();
        
        
        cnt++;
        int c=p.first;
        int d=p.second;
        
        vis[c][d]=true;
        
        if(c+1<h && !vis[c+1][d] && arr[c+1][d]==0)
        q.push({c+1,d}),vis[c+1][d]=true;
        if(c-1>=0 && !vis[c-1][d]  && arr[c-1][d]==0)
        q.push({c-1,d}),vis[c-1][d]=true;
        if(d+1<w && !vis[c][d+1]  && arr[c][d+1]==0)
        q.push({c,d+1}),vis[c][d+1]=true;
        if(d-1>=0 && !vis[c][d-1] && arr[c][d-1]==0)
        q.push({c,d-1}),vis[c][d-1]=true;
        if(c-1>=0 && d-1>=0 && !vis[c-1][d-1] && arr[c-1][d-1]==0)
        q.push({c-1,d-1}),vis[c-1][d-1]=true;
        if(c-1>=0 && d+1<w && !vis[c-1][d+1] && arr[c-1][d+1]==0)
        q.push({c-1,d+1}),vis[c-1][d+1]=true;
        if(c+1<h && d-1>=0 && !vis[c+1][d-1] && arr[c+1][d-1]==0)
        q.push({c+1,d-1}),vis[c+1][d-1]=true;
        if(c+1<h && d+1<w && !vis[c+1][d+1] && arr[c+1][d+1]==0)
        q.push({c+1,d+1}),vis[c+1][d+1]=true;
    }
    return cnt;
}
int main(){
    int t;
    cin>>t;
    int w,h,n;
    int a,b;
    while(t--){
        cin>>w>>h>>n;
        
        vector<vector<int> > arr(h,vector<int>(w));
        for(int i=0;i<h;i++)for(int j=0;j<w;j++)arr[i][j]=0;
        while(n--){
            cin>>a>>b;
            arr[h-b][a-1]=1;
            
            for(int i=0;i<w;i++)
            arr[h-b][i]=1;
            
            for(int i=0;i<h;i++)
            arr[i][a-1]=1;
        }
        
        
        // for(int i=0;i<h;i++){
        //     for(int j=0;j<w;j++)
        //     cout<<arr[i][j]<<" ";
            
        //     cout<<endl;
        // }
        
        
        int maxi=INT_MIN;
        vector<vector<bool> > vis(h,vector<bool>(w));
        for(int i=0;i<h;i++)for(int j=0;j<w;j++)vis[i][j]=false;
        
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(arr[i][j]==0 && !vis[i][j]){
                int ans=bfs(arr,i,j,vis,h,w);
                // cout<<i<<"  "<<j<<" "<<ans<<endl;
                maxi=max(maxi,ans);
                }
            }
        }
        
        cout<<maxi<<endl;
    }
}
