
#include "binary_tree.h"
#include <stdlib.h>

static TreeNode* create_node(int value) {
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

static TreeNode* insert_node(TreeNode* root, int value) {
    if (!root) return create_node(value);
    if (value < root->value)
        root->left = insert_node(root->left, value);
    else if (value > root->value)
        root->right = insert_node(root->right, value);
    return root;
}

static int search_node(TreeNode* root, int value) {
    if (!root) return 0;
    if (root->value == value) return 1;
    if (value < root->value) return search_node(root->left, value);
    else return search_node(root->right, value);
}

static void clear_node(TreeNode* root) {
    if (!root) return;
    clear_node(root->left);
    clear_node(root->right);
    free(root);
}

void init_tree(BinaryTree* tree) {
    tree->root = NULL;
}

void insert_tree(BinaryTree* tree, int value) {
    tree->root = insert_node(tree->root, value);
}

int search_tree(BinaryTree* tree, int value) {
    return search_node(tree->root, value);
}

void clear_tree(BinaryTree* tree) {
    clear_node(tree->root);
    tree->root = NULL;
}
