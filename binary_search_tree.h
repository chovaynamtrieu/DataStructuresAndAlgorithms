#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int value);
};

class BinarySearchTree {
private:
    Node* root;

    Node* insertHelper(Node* node, int value);
    void inOrderTraversalHelper(Node* node);
    int sizeHelper(Node* node);

public:
    BinarySearchTree();
    void insert(int value);
    void inOrderTraversal();
    int size();
    bool isFullBinaryTree(Node* root);
};

#endif  // BINARY_SEARCH_TREE_H
