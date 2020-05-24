//
//  MergeTrees.c
//  AIgorithm
//
//  Created by apple on 2020/5/24.
//  Copyright © 2020 walker. All rights reserved.
//

#include "MergeTrees.h"
#include <stdlib.h>

/// 打印一个树
/// @param tree 树
void showTree(PTreeNode tree) {
    
    if (tree == NULL) {
        printf("\nEOF");
        return;
    }
    
    printf("%d\n",tree->val);
    
    if (tree->left != NULL) {
        showTree(tree->left);
    }
    
    if (tree->right != NULL) {
        showTree(tree->right);
    }
}

/// 创建一个新节点
/// 节点的值
PTreeNode createNode(int val) {
    
    PTreeNode node = (PTreeNode)malloc(sizeof(TreeNode));
    
    if (node != NULL) {
        node->val = val;
        node->left = NULL;
        node->right = NULL;
        return node;
    }
    
    return NULL;
}

/// 合并两个树
/// @param t1 第一个树
/// @param t2 第二个数
struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {
    
    if (t1 == NULL) {
        return t2;
    }
    
    if (t2 == NULL) {
        return t1;
    }
    
    t1->val = t1->val + t2->val;
    t1->left = mergeTrees(t1->left, t2->left);
    t1->right = mergeTrees(t1->right, t2->right);
    
    return t1;
}
