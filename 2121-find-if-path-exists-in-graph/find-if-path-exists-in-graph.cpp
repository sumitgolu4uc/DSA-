class Solution {
public:
bool solve(int source,int destination,unordered_map<int,vector<int>>&mp,vector<bool>&visited){
    if(source==destination) return true;
    if(visited[source]==true) return false;
    visited[source]=true;
    for(auto& it:mp[source]){
        if(solve(it,destination,mp,visited)) return true;
    }
    return false;
}
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>mp;
        for(vector<int>&edge:edges){
            int u=edge[0];
            int v=edge[1];
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        vector<bool>visited(n,false);
        return solve(source,destination,mp,visited);
        
    }
};