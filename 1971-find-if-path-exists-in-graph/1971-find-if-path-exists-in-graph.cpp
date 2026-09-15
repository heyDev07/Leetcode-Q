class Solution {
public:
    void solve(vector<vector<int>>&adj,int source,int destination,vector<int>&visited){
            visited[source]=1;
            for(auto nei:adj[source]){
                if(!visited[nei]){
                     solve(adj,nei,destination,visited);
                }
            }
            
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
            vector<vector<int>>adj(n);
            for(int i=0;i<edges.size();i++){
                int u=edges[i][0];
                int v=edges[i][1];
                adj[v].push_back(u);
                adj[u].push_back(v);
            }
            vector<int>visited(n,0);
             solve(adj,source,destination,visited);
             if(visited[destination]==1) return true;
             return false;
    }
};