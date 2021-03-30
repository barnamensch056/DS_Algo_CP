#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void Dependencies(int V,vector<int>adj[]){
   int sum=0;
   for(int i=0;i<V;i++){
       sum+=adj[i].size();
   }
   cout<<sum<<endl;
}

int main() {
	int T;
	cin>>T;
	while(T>0){
	    int V,E;
	    cin>>V>>E;
	    vector<int>adj[V];
	    for(int i=0;i<E;i++){
	        int u,v;
	        cin>>u>>v;
	        adj[u].push_back(v);
	    }
	    Dependencies(V,adj);
	    T--;
	}
	return 0;
}