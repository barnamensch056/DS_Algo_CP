#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100001];
vector<int>vis(10001,0);

void dfs(int node){
    vis[node]=1;

for(int it:adj[node]){
    if(!vis[it])
    dfs(it);
}
}
int main(){
    int v,e,a,b;
    cin>>v>>e;

    for(int i=0;i<e;i++){
      cin>>a>>b;
      adj[a].push_back(b);
      adj[b].push_back(a);
    }

    int ccount=0;
    for(int i=0;i<v;i++){
        if(!vis[i]){
            dfs(i);
            ccount++;
        }
    }
    cout<<ccount;
}