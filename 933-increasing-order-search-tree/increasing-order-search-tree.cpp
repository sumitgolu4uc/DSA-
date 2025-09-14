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
  void inorder(TreeNode* root,vector<TreeNode*>&in){
      if(!root) return ;
      inorder(root->left,in);
      in.push_back(root);
       inorder(root->right,in);
  } 
    TreeNode* increasingBST(TreeNode* root) {
        vector<TreeNode*>in;
        inorder(root,in);
        for(int i=0;i<in.size();i++){
            in[i]->left=nullptr;
            if(i==in.size()-1) in[i]->right=nullptr;
            else in[i]->right=in[i+1];
        }
        return in[0];

        
    }
};