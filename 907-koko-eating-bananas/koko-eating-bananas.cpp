class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<high){
            int mid=low+(high-low)/2;
            long long totalh=0;
            for(int p:piles){
                totalh+=(p+mid-1)/mid;
            }
            if(totalh<=h){
                high=mid;

            }else{
                low=mid+1;
            }
        }
        return low;
    }
};