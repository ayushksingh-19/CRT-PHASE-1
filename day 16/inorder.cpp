#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        val = value;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    vector<int> ans;

    void inorder(TreeNode* root) {
        if (root == NULL) {
            return;
        }

        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        ans.clear();
        inorder(root);
        return ans;
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    Solution obj;
    vector<int> result = obj.inorderTraversal(root);

    cout << "Inorder traversal: ";
    for (int value : result) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
