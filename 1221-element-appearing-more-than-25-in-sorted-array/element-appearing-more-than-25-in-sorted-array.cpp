class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        map<int,int>m;
        for(int n:arr) m[n]++;
        for(auto& it:m){
            if(it.second>n/4) return it.first;
        }
        return -1;
    }
};