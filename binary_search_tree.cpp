#include "binary_search_tree.h"
#include <iostream>

using namespace std;

Node::Node(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
}

BinarySearchTree::BinarySearchTree() {
    root = nullptr;
}

Node* BinarySearchTree::insertHelper(Node* node, int value) {
    if (node == nullptr) {
        return new Node(value);
    }

    if (value < node->value) {
        node->left = insertHelper(node->left, value);
    } else if (value > node->value) {
        node->right = insertHelper(node->right, value);
    }

    return node;
}

void BinarySearchTree::insert(int value) {
    root = insertHelper(root, value);
}

void BinarySearchTree::inOrderTraversalHelper(Node* node) {
    if (node == nullptr) {
        return;
    }

    inOrderTraversalHelper(node->left);
    cout << "value: "<< node->value << ". Size of node: " << sizeHelper(node) <<std::endl;
    inOrderTraversalHelper(node->right);
}

void BinarySearchTree::inOrderTraversal() {
    inOrderTraversalHelper(root);
}

int BinarySearchTree::sizeHelper(Node* node) {
    if (node == nullptr) {
        return 0;
    }

    return 1 + sizeHelper(node->left) + sizeHelper(node->right);
}
