class Solution {
public:
    int maxNumberOfBalloons(string text) {
       map<char,int>m;
       for(char c:text) m[c]++;
         
        int maxBalloons = 1e9;
        maxBalloons = min(maxBalloons, m['b'] / 1);
        maxBalloons = min(maxBalloons, m['a'] / 1);
        maxBalloons = min(maxBalloons, m['l'] / 2);
        maxBalloons = min(maxBalloons, m['o'] / 2);
        maxBalloons = min(maxBalloons, m['n'] / 1);
        return maxBalloons;



        
    }
};