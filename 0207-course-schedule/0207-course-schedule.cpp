class Solution {
public:
    bool solve(int node,vector<vector<int>>&adj,vector<int>&visited,vector<int>&currpath){
        visited[node]=1;
        currpath[node]=1;
        for(auto nei: adj[node]){
            if(!visited[nei]){
                if(!solve(nei,adj,visited,currpath)){return false;
            }
        }
            else if(currpath[nei]==1) return false;
        }
        currpath[node]=0;
        return true;
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<int>visited(n,0);
        vector<int>currpath(n,0);
        vector<vector<int>>adj(n);
        for(int i=0;i<prerequisites.size();i++){
                int u=prerequisites[i][0];
                int v=prerequisites[i][1];
                adj[v].push_back(u);
        }
        //just check if there is a cycle there or not if yes then false else return true
        for(int i=0;i<n;i++){
            if(!visited[i]){
                if(!solve(i,adj,visited,currpath)){
                    return false;
                };
            }
        }
        return true;
    }

};