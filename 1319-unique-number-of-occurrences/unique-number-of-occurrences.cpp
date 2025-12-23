class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        for(int num:arr) m[num]++;
        set<int>st;
        for(auto &it:m){
            if(st.count(it.second)) return false;
            st.insert(it.second);
        }
        return true;
    }
};