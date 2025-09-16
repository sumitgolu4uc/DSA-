class Solution {
public:
    string frequencySort(string s) {
      string ans="";
      map<char,int>m;
      for(char c:s) m[c]++;
      priority_queue<pair<int,char>>maxHeap;
      for(auto it:m){
        maxHeap.push({it.second,it.first});
      }
      while(!maxHeap.empty()){
        auto it=maxHeap.top();
        for(int i=0;i<it.first;i++) ans+=it.second;
        maxHeap.pop();
      }
      return ans;
        
    }
};