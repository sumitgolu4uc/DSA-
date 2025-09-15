typedef pair<int,int> p;
class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue <p,vector<p>,greater<p>>mh;
        map<int,int>m;
        for(int n:nums) m[n]++;
        for(auto it:m){
            mh.push({it.second,it.first});
            if(mh.size()>k) mh.pop();
        }
        vector<int>ans;
        while(!mh.empty()){
            ans.push_back(mh.top().second);
            mh.pop();
        }
        return ans;
       
    }
};