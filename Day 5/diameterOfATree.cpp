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
    pair<int , int> diameter(TreeNode* root){
        if(root == NULL){
            pair<int , int> bp = make_pair(0,-1); //first = diameter , second = height
            return bp;
        }
        
        pair<int , int>lp = diameter(root->left);
        pair<int , int>rp = diameter(root->right);
        
        int option1 = lp.first;
        int option2 = rp.first;
        int option3 = lp.second + rp.second + 2;
        
        pair<int , int> result;
        result.first = max(option1 , max(option2 , option3));
        result.second = max(lp.second , rp.second) + 1;
        
        return result;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int , int> ans = diameter(root);
        return ans.first;
    }
};