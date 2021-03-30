#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int V,E;
    cin>>V>>E;
    vector<int>adj[V];
    cout<<"Enter the edges:"<<endl;
    int v,u;
    for(int j=0;j<E;j++){
      cin>>v>>u;
      adj[v].push_back(u);
      adj[u].push_back(v);
    }
  for(int i=0;i<V;i++){
      cout<<i<<"->";
      for(auto x:adj[i]){
          cout<<x;
          cout<<",";
      }
      cout<<"\n";
  }
    
return 0;

}