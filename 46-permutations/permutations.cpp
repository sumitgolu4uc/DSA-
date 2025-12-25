class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
          vector<vector<int>>ans;
          vector<int>path;
          int n=nums.size();
          vector<bool>used(n,false);
          function<void()>dfs=[&](){
            if(path.size()==nums.size()){
                ans.push_back(path);
                return ;
            }
            for(int i=0;i<n;i++){
                if(used[i]) continue;
                used[i]=true;
                path.push_back(nums[i]);
                dfs();
                used[i]=false;
                path.pop_back();
            }
          };
          dfs();
          return ans;
       
    }
};