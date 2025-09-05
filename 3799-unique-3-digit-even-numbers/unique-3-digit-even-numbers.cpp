class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int>ans;
        int n=digits.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i==j||j==k||k==i||digits[i]==0) continue;
                    int num=digits[i]*100+digits[j]*10+digits[k]*1;
                    if(num%2==0) ans.insert(num);
                }
            }
        }
        return ans.size();
    }
};