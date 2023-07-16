class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        invertTree(root->left); //calls until left and right == null
        invertTree(root->right);
        TreeNode* temp = root->left; //when null swap
        root->left= root->right;
        root->right = temp;
        return root; 
    }
};
