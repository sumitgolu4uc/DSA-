class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m1=mat[0].size();
     map<int,vector<int>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m1;j++){
                m[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>ans;
        for(auto& it:m){
            if(it.first%2==0) reverse(it.second.begin(),it.second.end());
            for(int &n:it.second){
                ans.push_back(n);
            }

        }
        return ans;
        
    }
};