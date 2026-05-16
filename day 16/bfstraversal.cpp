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

void preorder(TreeNode* root) {
    if (root == NULL) {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(TreeNode* root) {
    if (root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(TreeNode* root) {
    if (root == NULL) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    int choice;
    cout << "Choose traversal type:" << endl;
    cout << "1. Preorder" << endl;
    cout << "2. Inorder" << endl;
    cout << "3. Postorder" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Preorder traversal: ";
        preorder(root);
    } else if (choice == 2) {
        cout << "Inorder traversal: ";
        inorder(root);
    } else if (choice == 3) {
        cout << "Postorder traversal: ";
        postorder(root);
    } else {
        cout << "Invalid choice";
    }

    cout << endl;

    return 0;
}
