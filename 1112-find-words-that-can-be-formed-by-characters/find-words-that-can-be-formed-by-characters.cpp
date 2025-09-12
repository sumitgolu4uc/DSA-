class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int cnt=0;
        map<char,int>m;
        for(char c:chars) m[c]++;
        for(int i=0;i<words.size();i++){
            map<char,int>temp=m;
            string s=words[i];
            bool flag=true;
            for(int i=0;i<s.size();i++){
                if(temp[s[i]]>0) temp[s[i]]--; 
                else flag=false;
            }
            if(flag==true) cnt+=s.size();

        }
        return cnt;
    }
};