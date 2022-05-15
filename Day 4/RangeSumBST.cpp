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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL){
            return 0;
        }
        
        int sum = 0;
        if(root->val >= low && root->val <= high){
            sum += root->val;
        }
        return sum + rangeSumBST(root->left , low , high)+rangeSumBST(root->right , low , high);
    }
};

//method 2:- use queue for level order traversal

//method 3:- use the concept of BST
            //if root->data < low traverse right
            //if root->data > high traverse left