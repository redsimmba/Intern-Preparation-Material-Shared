 bool isbst(TreeNode* root, int l, int r) {
    if (root == NULL) {
        return true;
    }
    if (root->val > l and root->val < r and isbst(root->left, l, root->val) and
        isbst(root->right, root->val, r)) {
        return true;
    }
    return false;
}

int sum(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    return root->val + sum(root->left) + sum(root->right);
}
void temp(TreeNode* root, vector<int>& v) {
    if (root == NULL) {
        return;
    }
    if (isbst(root, INT_MIN, INT_MAX)) {
        v.push_back(sum(root));
    }
    temp(root->left, v);
    temp(root->right, v);
}
    int maxSumBST(TreeNode* root) {
         vector<int> v;
    temp(root, v);
    return max(0,*max_element(v.begin(), v.end()));
    }

    // Passes 55/58 on LC