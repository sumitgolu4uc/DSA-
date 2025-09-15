class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>p;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            p.push({abs(x-arr[i]),arr[i]});
            if(p.size()>k) p.pop();

        }
        while(p.size()>0){
            auto it=p.top();
            ans.push_back(it.second);
            p.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};