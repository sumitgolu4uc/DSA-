class Solution {
public:
    bool hasduplicates(string &s1, string &s2) {
        int arr[26] = {0};

        for (char c : s1) {
            if (arr[c - 'a'] > 0) return true; 
            arr[c - 'a']++;
        }
        for (char c : s2) {
            if (arr[c - 'a'] > 0) return true;
        }

        return false;
    }

    int solve(int idx, vector<string>& arr, int n, string temp) {
        if (idx >= n) return temp.size();

        int exclude = solve(idx + 1, arr, n, temp);
        int include = 0;

        if (!hasduplicates(arr[idx], temp)) {
            include = solve(idx + 1, arr, n, temp + arr[idx]);
        }
        return max(include, exclude);
    }

    int maxLength(vector<string>& arr) {
        return solve(0, arr, arr.size(), "");
    }
};
