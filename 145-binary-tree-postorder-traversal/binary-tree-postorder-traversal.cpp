class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;

        if(root == nullptr){
            return v;
        }

        vector<int> left = postorderTraversal(root->left);
        vector<int> right = postorderTraversal(root->right);

        for(int x : left){
            v.push_back(x);
        }

        for(int x : right){
            v.push_back(x);
        }

        v.push_back(root->val);

        return v;
    }
};