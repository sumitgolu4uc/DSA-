class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low=1;
        long long high=(long long)*min_element(time.begin(),time.end())*totalTrips;
        long long ans=high;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long trips=0;
            for(int x:time) trips+=mid/x;
            if(trips>=totalTrips){
                ans=mid;
                high=mid-1;
            }else low=mid+1;
        }
        return ans;
    }
};