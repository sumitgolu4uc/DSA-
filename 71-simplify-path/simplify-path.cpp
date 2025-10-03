class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string token;
        stack<string> st;
        while (getline(ss, token, '/')) {
            if (token == "" || token == ".") continue;
            else if (token == "..") {
                if (!st.empty()) st.pop();
            } else st.push(token);
        }
        if (st.empty()) return "/";
        string res = "";
        vector<string> dirs;
        while (!st.empty()) {
            dirs.push_back(st.top());
            st.pop();
        }
        reverse(dirs.begin(), dirs.end());

        for (string &dir : dirs) res += "/" + dir;
        return res;

        
    }
};