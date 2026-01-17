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

#include <queue>
#include <vector>

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;

        if (!root) {
            return result;
        }

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int l = q.size();

            for (int i=0;i<l;i++) {
                TreeNode* cn = q.front();

                if (i==l-1) {
                    result.push_back(cn->val);
                }

                if (cn->left) {
                    q.push(cn->left);
                }
                if (cn->right) {
                    q.push(cn->right);
                }

                q.pop();
            }
        }

        return result;

    }
};