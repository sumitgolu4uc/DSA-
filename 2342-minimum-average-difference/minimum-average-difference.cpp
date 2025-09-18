typedef long long  ll;
class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int mindiff=INT_MAX;
        ll totalSum=0;
        int n=nums.size();
        for(int n:nums) totalSum+=n;
        ll currSum=0;
        int ansIndex=-1;
        for(int i=0;i<nums.size();i++){
           currSum += nums[i];
            ll x = currSum / (i + 1); 
            ll y = (i == n - 1) ? 0 : (totalSum - currSum) / (n - i - 1); 

            int diff = int(abs(x - y));

            if (diff < mindiff) {
                mindiff = diff;
                ansIndex = i;
            }
        }
        return ansIndex;
        
    }
};