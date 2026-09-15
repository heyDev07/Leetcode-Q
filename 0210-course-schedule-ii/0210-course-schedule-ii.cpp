class Solution {
public:
 bool solve(int node,vector<vector<int>>&adj,vector<int>&visited,vector<int>&currpath,stack<int>&st){
        visited[node]=1;
        currpath[node]=1;
        for(auto nei: adj[node]){
            if(!visited[nei]){
                if(!solve(nei,adj,visited,currpath,st)){return false;
            }
        }
            else if(currpath[nei]==1) return false;
        }
        currpath[node]=0;
        st.push(node);
        return true;
}
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
         int n=numCourses;
        vector<int>visited(n,0);
        vector<int>currpath(n,0);
        vector<vector<int>>adj(n);
        vector<int>ans;
        stack<int>st;
        for(int i=0;i<prerequisites.size();i++){
                int u=prerequisites[i][0];
                int v=prerequisites[i][1];
                adj[v].push_back(u);
        }
        //just check if there is a cycle there or not if yes then false else return true
        for(int i=0;i<n;i++){
            if(!visited[i]){
                if(!solve(i,adj,visited,currpath,st)){
                    return {};
                }
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};