/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
vector<string>ans;
 void traverse(TreeNode* root,string s){
    if(!root) return;
      s+=to_string(root->val);
    if(!root->left&&!root->right){
        ans.push_back(s);
        return ;
    }
    traverse(root->left,s);
     traverse(root->right,s);
 }
    int sumNumbers(TreeNode* root) {
        string s="";
        traverse(root,s);
        int sum=0;
        for(int i=0;i<ans.size();i++){
            sum+=stoi(ans[i]);
        }
        return sum;
        
    }
};