#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left,*right;
    
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
bool path(node *root,int a,vector<int>& v){
    if(root==NULL)
    return false;
    
    v.push_back(root->data);
    
    if(root->data==a)
        return true;
    
    //v.push_back(root->data);
    if((root->left && path(root->left,a,v))||(root->right && path(root->right,a,v)))
    return true;
    
    v.pop_back();
    return false;
}
int lca(node *root,int a,int b){
    vector<int> v1,v2;
    path(root,a,v1);
    path(root,b,v2);
    
    for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
    cout<<endl;
    
    for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";
    cout<<endl;
    
    if(v1.size()!=0 && v2.size()!=0)
    {
        for(int i=0;i<min(v1.size(),v2.size());i++){
            if(v1[i]!=v2[i])
            return v1[i-1];
        }
    }
    return -1;
}
int main(){
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->left->left=new node(6);
    root->left->right=new node(5);
    
    cout<<lca(root,6,5)<<endl;
}
