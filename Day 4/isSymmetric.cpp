//Method 1 -> use queue
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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(root);
        
        while(!q.empty()){
            TreeNode* leftNode = q.front();
            q.pop();
            TreeNode* rightNode = q.front();
            q.pop();
            
            if(leftNode->val != rightNode->val){
                return false;
            }
            
            //for symmetry both condition should bne satisfied
            if(leftNode->left && rightNode->right){
                q.push(leftNode->left);
                q.push(rightNode->right);
            }else if(leftNode->left || rightNode->right){
                return false; //cause if only one child remains then it is not symmetric
            }
            
            //leftNode's right child and rightNode's child
            if(leftNode->right && rightNode->left){
                q.push(leftNode->right);
                q.push(rightNode->left);
            }else if(leftNode->right || rightNode->left){
                return false;
            }
        }
        return true;
    }
};

//Method 2 -> recursion
class Solution {
public:
    bool isSym(TreeNode* root1 , TreeNode* root2){
        if(root1 == NULL && root2 == NULL){
            return true;
        }
        
        if(root1 && root2 && root1->val == root2->val){
            return isSym(root1->left , root2->right) && isSym(root2->left , root1->right);
        }
        return false;
    }
    
    bool isSymmetric(TreeNode* root) {
        return (root == NULL) || isSym(root->left , root->right);
    }
};