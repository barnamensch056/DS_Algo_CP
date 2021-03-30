#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
	public:
	void solveDFS(vector<bool>&visited,vector<int>adj[],int v,stack<int>&s1){
	    visited[v]=true;
	    
	    for(auto it=adj[v].begin();it!=adj[v].end();it++){
	        if(!visited[*it])
	        solveDFS(visited,adj,*it,s1);
	    }
	    s1.push(v);
	    
	}
	vector<int> topoSort(int V, vector<int> adj[]) {
	    vector<bool>visited(V,false);
	    vector<int>v2;
	    stack<int>s1;
	    for(int i=0;i<V;i++){
	        if(!visited[i])
	         solveDFS(visited,adj,i,s1);
	    }
	    while(!s1.empty()){
	        v2.push_back(s1.top());;
	        s1.pop();
	    }
	    return v2;
	}
};

// { Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}  // } Driver Code Ends