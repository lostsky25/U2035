class Solution {
public:
    bool isSame(TreeNode* left, TreeNode* right) {
        if (left == nullptr && right == nullptr) {
            return true;
        }

        if (left == nullptr || right == nullptr) {
            return false;
        }

        return left->val == right->val &&
            isSame(left->left, right->left) &&
            isSame(left->right, right->right);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return isSame(p, q);
    }
};