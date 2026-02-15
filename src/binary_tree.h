#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TreeNode {
    int value;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

typedef struct BinaryTree {
    TreeNode* root;
} BinaryTree;

void init_tree(BinaryTree* tree);
void insert_tree(BinaryTree* tree, int value);
int search_tree(BinaryTree* tree, int value);
void clear_tree(BinaryTree* tree);

#ifdef __cplusplus
}
#endif

#endif
