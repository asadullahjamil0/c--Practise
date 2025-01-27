#include <iostream>
#include <algorithm>  // for std::max

using namespace std;

// Definition of a node in AVL tree
struct Node {
    int key;
    Node* left;
    Node* right;
    int height;

    Node(int value) {
        key = value;
        left = right = nullptr;
        height = 1;
    }
};

// Function to get the height of a node
int getHeight(Node* node) {
    return node ? node->height : 0;
}

// Function to get the balance factor of a node
int getBalance(Node* node) {
    return node ? getHeight(node->left) - getHeight(node->right) : 0;
}

// Right Rotation (Single Rotation)
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    // Return the new root
    return x;
}

// Left Rotation (Single Rotation)
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    // Return the new root
    return y;
}

// Insert a node into the AVL tree
Node* insert(Node* node, int key) {
    // 1. Perform normal BST insert
    if (!node) return new Node(key);

    if (key < node->key) {
        node->left = insert(node->left, key);
    } else if (key > node->key) {
        node->right = insert(node->right, key);
    } else {
        return node;  // Duplicate keys are not allowed
    }

    // 2. Update height of this ancestor node
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));

    // 3. Get the balance factor to check whether this node became unbalanced
    int balance = getBalance(node);

    // 4. If this node becomes unbalanced, then there are 4 cases:

    // Left Left Case (Right rotation)
    if (balance > 1 && key < node->left->key) {
        return rightRotate(node);
    }

    // Right Right Case (Left rotation)
    if (balance < -1 && key > node->right->key) {
        return leftRotate(node);
    }

    // Left Right Case (Left-Right rotation)
    if (balance > 1 && key > node->left->key) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Right Left Case (Right-Left rotation)
    if (balance < -1 && key < node->right->key) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    // Return the (unchanged) node pointer
    return node;
}

// Function to print the tree (inorder traversal)
void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = nullptr;

    // Inserting nodes into the AVL tree
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 50);
    root = insert(root, 40);
    root = insert(root, 30);  // This will trigger a left rotation

    cout << "Inorder traversal of the AVL tree: ";
    inorder(root);
    cout << endl;

    return 0;
}
