#include<bits/stdc++.h>
using namespace std;
bool issafe(vector<vector<int> > arr,int i,int j,int n,int m){
    //cout<<"H$"<<endl;
    if(i>=0 && i<n && j>=0 && j<m && arr[i][j]==1)
    return true;
    
    return false;
}
void bfs(vector<vector<int> > arr,vector<vector<bool> >& vis,int i,int j,int n,int m){
    int x[8]={1,1,1,-1,-1,-1,0,0};
    int y[8]={0,1,-1,0,1,-1,1,-1};
    
    queue<pair<int,int> > q;
    q.push({i,j});
    while(!q.empty()){
        pair<int,int> p=q.front();
        q.pop();
        
        int a=p.first;
        int b=p.second;
        vis[a][b]=true;
        
        //cout<<"H@"<<endl;
        for(int i=0;i<8;i++){
            //cout<<"H5"<<endl;
            if( issafe(arr,a+x[i],b+y[i],n,m) && !vis[a+x[i]][b+y[i]])
            q.push({a+x[i],b+y[i]});
            
            //cout<<"H2"<<endl;
        }
        //cout<<"H3"<<endl;
    }
}

void dfs(vector<vector<int> > arr,vector<vector<bool> >& vis,int i,int j,int n,int m,int x[8],int y[8]){
    
    vis[i][j]=true;
    for(int k=0;k<8;k++){
          //cout<<"H5"<<endl;
             if( issafe(arr,i+x[k],j+y[k],n,m) && !vis[i+x[k]][j+y[k]])
             dfs(arr,vis,i+x[k],j+y[k],n,m,x,y);
            
             //cout<<"H2"<<endl;
     }
    
    
    // queue<pair<int,int> > q;
    // q.push({i,j});
    // while(!q.empty()){
    //     pair<int,int> p=q.front();
    //     q.pop();
        
    //     int a=p.first;
    //     int b=p.second;
    //     vis[a][b]=true;
        
    //     //cout<<"H@"<<endl;
    //     for(int i=0;i<8;i++){
    //         //cout<<"H5"<<endl;
    //         if( issafe(arr,a+x[i],b+y[i],n,m) && !vis[a+x[i]][b+y[i]])
    //         q.push({a+x[i],b+y[i]});
            
    //         //cout<<"H2"<<endl;
    //     }
    //     //cout<<"H3"<<endl;
    // }
}
int main(){
    int t;
    string a,b;
    long n,m;
    scanf("%d", &t);
    //cin>>t;
    int x[]={1,1,1,-1,-1,-1,0,0};
    int y[]={0,1,-1,0,1,-1,1,-1};
    
    while(t--){
        int c=0;
        //cin>>n>>m;
        
        scanf("%ld", &n);
        scanf("%ld", &m);
        
        vector<vector<int> > arr(n,vector<int>(m));
        
        for(int i=0;i<n;i++)for(int j=0;j<m;j++){//cin>>arr[i][j];
            scanf("%d", &arr[i][j]);
        }
        
        vector<vector<bool> > vis(n,vector<bool>(m));
        
        for(int i=0;i<n;i++)for(int j=0;j<m;j++)vis[i][j]=false;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j] && !vis[i][j])
                {
                    c++;
                    bfs(arr,vis,i,j,n,m);
                    //dfs(arr,vis,i,j,n,m,x,y);
                    //cout<<"H"<<endl;
                }
                
                // if(arr[i][j]){
                //     int f=0;
                //     for(int k=0;k<8;k++){
                //         if(issafe(arr,i+x[k],j+y[k],n,m))
                //         {f=1;break;}
                //     }
                //     if(!f){
                //     c++;
                // }
                // if(arr[i][j]){
                //     if((i-1>=0 && arr[i-1][j]) || (j-1>=0 && arr[i][j-1]) || (i-1>=0 && j-1>=0 && arr[i-1][j-1]) || (i+1<n && j-1>=0 && arr[i+1][j-1]) || (i+1<n && arr[i+1][j]))
                //     {}
                //     else{
                //     //cout<<i<<"  "<<j<<endl;
                //     c++;
                //     }
                // }
            }
        }
        
        printf("%d\n", c);
        //cout<<c<<endl;
    }
}
