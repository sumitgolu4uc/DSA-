class Solution {
public:
    int thirdMax(vector<int>& nums) {
          set<long long> s;

        for (int x : nums) {
            s.insert(x);
            if (s.size() > 3)
                s.erase(s.begin());   // smallest remove
        }

        if (s.size() < 3)
            return *s.rbegin();      // max element

        return *s.begin();           // 3rd ma
    }
};