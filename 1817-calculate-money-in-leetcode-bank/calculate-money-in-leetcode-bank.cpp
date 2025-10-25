class Solution {
public:
    int totalMoney(int n) {
      int res=0;
      int week=0;
      for(int i=1;i<=n;i++){
        int day=((i-1)%7)+1;
        res+=week+day;
        if(i%7==0) week++;
      }
      return res;
        
    }
};