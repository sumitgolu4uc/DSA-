class Solution {
public:
    int maxFreqSum(string s) {
     int vowel = 0;
        int consonant = 0;
        map<char, int> m;
               
        for (char num : s) m[num]++;
                   
         for (auto &it : m) {
            char b = tolower(it.first);  // handles uppercase too
             if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u') {
                    vowel = max(vowel, it.second);
                 } else if (isalpha(b)) {  // only count letters as consonants
                    consonant = max(consonant, it.second);
               }
         }
                                                                                   
    return vowel+consonant;    
         }                                                                   

       
};