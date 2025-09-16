
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<long long,pair<int,int>>>maxHeap;
        for(int i=0;i<points.size();i++){
            int x=points[i][0];
            int y=points[i][1];
            long long ans=1LL*x*x+1LL*y*y;
            maxHeap.push({ans,{x,y}});
            if(maxHeap.size()>k) maxHeap.pop();
        }
        vector<vector<int>> ans;
        while(!maxHeap.empty()){
            auto it=maxHeap.top();
            int x=it.second.first;
            int y=it.second.second;
            ans.push_back({x,y});
            maxHeap.pop();
        }
        return ans;
        
    }
};