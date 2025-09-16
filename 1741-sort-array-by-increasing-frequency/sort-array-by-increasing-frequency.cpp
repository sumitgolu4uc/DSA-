class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int n:nums) freq[n]++;
        sort(nums.begin(),nums.end(),[&freq](int a,int b){
            if(freq[a]==freq[b]) return a>b;
            return freq[a]<freq[b];

        });
        return nums;
    


        
    }
};