#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool isBFS(vector<int> adj[],int N,int node,vector<int> &color){
        queue<int>q1;
        q1.push(node);
        color[node]=1;
        while(!q1.empty()){
            int curr=q1.front();
            q1.pop();
            for(int ele:adj[curr]){
                if(color[ele]==color[curr])
                  return false;
                 else if(color[ele]==-1){
                     color[ele]=1-color[curr];
                     q1.push(ele);
                 }
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
       vector<int>color(V,-1);
       for(int i=0;i<V;i++){
           if(color[i]==-1){
               if(!isBFS(adj,V,i,color))
                  return false;
         
           }
       }
       return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends