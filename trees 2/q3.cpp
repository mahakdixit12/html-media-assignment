class Solution {
public:
int levels(TreeNode* root){
if(root==NULL) return 0;
return 1 + max(levels(root->left),levels(root->right));
}
bool isBalanced(TreeNode* root) {
if(root==NULL) return true;
int left = levels(root->left);
int right = levels(root->right);
int diff = abs(left - right);
if(diff>1) return false;
bool leftTreeAns = isBalanced(root->left);
if(leftTreeAns==false) return false;
bool rightTreeAns = isBalanced(root->right);
if(rightTreeAns==false) return false;
return true;
}
};