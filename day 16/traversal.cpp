#include <iostream>
#include <queue>
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

void bfs(TreeNode* root) {
    if (root == NULL) {
        return;
    }

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left != NULL) {
            q.push(current->left);
        }

        if (current->right != NULL) {
            q.push(current->right);
        }
    }
}

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
        return 0;
    }

    cout << "\nBFS traversal: ";
    bfs(root);

    cout << "\nDFS preorder: ";
    preorder(root);

    cout << "\nDFS inorder: ";
    inorder(root);

    cout << "\nDFS postorder: ";
    postorder(root);
    cout << endl;

    deleteTree(root);
    return 0;
}
