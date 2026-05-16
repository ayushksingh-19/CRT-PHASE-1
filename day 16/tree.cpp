#include <iostream>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

TreeNode* createTree(const string& message) {
    int value;
    cout << message;
    cin >> value;

    if (value == -1) {
        return NULL;
    }

    TreeNode* root = new TreeNode(value);

    root->left = createTree("Enter left child of " + to_string(value) + " (-1 for no node): ");

    root->right = createTree("Enter right child of " + to_string(value) + " (-1 for no node): ");

    return root;
}

void showTree(TreeNode* root) {
    if (root == NULL) {
        return;
    }

    cout << "Node: " << root->data << " ";

    if (root->left != NULL) {
        cout << "Left: " << root->left->data << " ";
    } else {
        cout << "Left: NULL ";
    }

    if (root->right != NULL) {
        cout << "Right: " << root->right->data;
    } else {
        cout << "Right: NULL";
    }

    cout << endl;

    showTree(root->left);
    showTree(root->right);
}

void deleteTree(TreeNode* root) {
    if (root == NULL) {
        return;
    }

    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

int main() {
    TreeNode* root = createTree("Enter root value (-1 for empty tree): ");

    if (root == NULL) {
        cout << "Tree is empty." << endl;
    } else {
        cout << "Tree generated successfully." << endl;
        showTree(root);
    }

    deleteTree(root);
    return 0;
}
