class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int cnt = 0;

        // frequency of available characters
        vector<int> freq_chars(26, 0);
        for(char c : chars) freq_chars[c - 'a']++;

        for(string &s : words) {
            vector<int> freq_word(26, 0);
            bool flag = true;

            for(char c : s) {
                freq_word[c - 'a']++;
                if (freq_word[c - 'a'] > freq_chars[c - 'a']) {
                    flag = false;
                    break;
                }
            }

            if(flag) cnt += s.size();
        }

        return cnt;
    }
};
