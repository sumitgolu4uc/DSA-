class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
      int n = changed.size();
        vector<int> ans;
        if(n % 2 != 0) return {};

        sort(changed.begin(), changed.end()); 
        map<int,int> m;
        for(int num : changed) m[num]++;

        for(int i = 0; i < n; i++){
            int x = 2 * changed[i];
            if(m[changed[i]] == 0) continue; 
            if(m[x] == 0) return {}; 
            ans.push_back(changed[i]);
            m[changed[i]]--;
            m[x]--;
        }

        return ans;
        
    }
};