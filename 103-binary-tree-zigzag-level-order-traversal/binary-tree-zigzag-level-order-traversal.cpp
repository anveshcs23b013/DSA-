class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        vector<int>temp;
        queue<TreeNode*>q;

        if(root == nullptr){
            return v;
        }

        q.push(root);
        q.push(nullptr);

        int level = 0;

        while(q.size() > 0){

            TreeNode* curr = q.front();

            if(curr == nullptr){

                if(level % 2 == 1){
                    reverse(temp.begin(), temp.end());
                }

                v.push_back(temp);
                temp.clear();

                q.pop();

                if(q.size() > 0){
                    q.push(nullptr);
                }

                level++;

            }else{

                temp.push_back(curr->val);
                q.pop();

                if(curr->left != nullptr){
                    q.push(curr->left);
                }

                if(curr->right != nullptr){
                    q.push(curr->right);
                }
            }
        }

        return v;
    }
};