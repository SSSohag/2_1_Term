#include <iostream>

// Node structure for the tree
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    // Constructor
    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Function to create a new tree node
TreeNode* createNode(int value) {
    return new TreeNode(value);
}

// Function to insert a new node as the left child of a given node
void insertLeft(TreeNode* parent, int value) {
    parent->left = createNode(value);
}

// Function to insert a new node as the right child of a given node
void insertRight(TreeNode* parent, int value) {
    parent->right = createNode(value);
}

// Function to perform inorder traversal of the tree (left, root, right)
void inorderTraversal(TreeNode* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        std::cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    // Create the root node
    TreeNode* root = createNode(1);

    // Insert elements into the tree
    insertLeft(root, 2);
    insertRight(root, 3);
    insertLeft(root->left, 4);
    insertRight(root->left, 5);

    // Print the tree using inorder traversal
    std::cout << "Inorder Traversal:" << std::endl;
    inorderTraversal(root);
    std::cout << std::endl;

    return 0;
}
