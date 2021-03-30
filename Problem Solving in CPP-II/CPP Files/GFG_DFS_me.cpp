#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
    void dfsGraph(vector<int>adj[],int s,bool visit[],vector<int> &asehi){
       visit[s]=true;
       asehi.push_back(s);
       for(auto it=adj[s].begin();it!=adj[s].end();it++){
           if(!visit[*it]){
               dfsGraph(adj,*it,visit,asehi);
           }
       }
    }
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	   bool* visited=new bool[V];
	   for(int i=0;i<V;i++){
	       visited[i]=false;
	   }
	   vector<int> asehi;
	   dfsGraph(adj,0,visited,asehi);
	   return asehi;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.dfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends