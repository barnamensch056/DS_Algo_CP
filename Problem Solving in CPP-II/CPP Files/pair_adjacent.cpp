#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	    int v,e;
	    cin>>v>>e;
	    vector<pair<int,int>>v1(e);
	    for(int i=0;i<v1.size();i++){
	        cin>>v1[i].first>>v1[i].second;
	    }
	    vector<vector<int>>adj1(e);
	    for(auto it:v1){
	        adj1[it.first].push_back(it.second);
	        adj1[it.second].push_back(it.first);
	    }
       for(int i=0;i<e;i++){
          for(auto it:adj1[i])
           cout<<it<<",";
       }
	
	return 0;
}