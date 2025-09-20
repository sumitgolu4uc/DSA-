class Solution {
public:
bool solve(int node,vector<int>&parent,vector<bool>&visited,unordered_map<int,vector<int>>&m){
     visited[node]=true;
     parent[node]=1;
     for(auto neib:m[node]){
        if(!visited[neib]){
            if(solve(neib,parent,visited,m)) return true;
        }else if(parent[neib]==1) return true;
     }
     parent[node]=0;
        return false;
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>m;
        int n=prerequisites.size();
        for(int i=0;i<n;i++){
            int v=prerequisites[i][0];
            int u=prerequisites[i][1];
            m[u].push_back(v);
        }
        vector<bool>visited(numCourses,false);
        vector<int>parent(numCourses,0);
       for(int i = 0; i < numCourses; i++) {
            if (!visited[i]) {
                if (solve(i, parent, visited, m)) 
                    return false; 
            }
        }
        return true; 
    }
};