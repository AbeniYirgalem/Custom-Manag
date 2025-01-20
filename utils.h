#ifndef UTILS_H
#define UTILS_H

#include <string>
using namespace std;

struct TreeNode {
    int id;
    string name;
    TreeNode* left;
    TreeNode* right;
};

extern TreeNode* root;

TreeNode* insertIntoTree(TreeNode* node, int id, string name);
void addCustomerToTree(int id, string name);

#endif

