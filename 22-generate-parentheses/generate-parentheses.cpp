class Solution {
public:
vector<string> result;
  bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
    void solve(string&s,int n){
        if(s.size()==2*n) {
            if(isValid(s)) result.push_back(s);
            return ;
        }
        s.push_back('(');
        solve(s,n);
        s.pop_back();
         s.push_back(')');
        solve(s,n);
        s.pop_back();

    }
    vector<string> generateParenthesis(int n) {
        string s="";
        solve(s,n);
        return result;
               
    }
};