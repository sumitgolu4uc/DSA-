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
    int findSecondMinimumValue(TreeNode* root) {
         if (!root) return -1;
        int minVal = root->val;
        long secondMin = LONG_MAX;

        // simple DFS
        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {
            TreeNode* node = st.top(); st.pop();
            if (!node) continue;

            if (node->val > minVal && node->val < secondMin) {
                secondMin = node->val;  
            }
            st.push(node->left);
            st.push(node->right);
        }

        return (secondMin == LONG_MAX) ? -1 : (int)secondMin;
    }
        
};