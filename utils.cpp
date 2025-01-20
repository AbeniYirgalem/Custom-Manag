#include "utils.h"
#include <iostream>
using namespace std;

TreeNode* root = nullptr;

TreeNode* insertIntoTree(TreeNode* node, int id, string name) {
    if (!node) return new TreeNode{id, name, nullptr, nullptr};
    if (id < node->id)
        node->left = insertIntoTree(node->left, id, name);
    else
        node->right = insertIntoTree(node->right, id, name);
    return node;
}

void addCustomerToTree(int id, string name) {
    root = insertIntoTree(root, id, name);
}
