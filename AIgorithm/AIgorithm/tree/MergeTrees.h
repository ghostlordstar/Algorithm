//
//  MergeTrees.h
//  AIgorithm
//
//  Created by apple on 2020/5/24.
//  Copyright © 2020 walker. All rights reserved.
//

#ifndef MergeTrees_h
#define MergeTrees_h

#include <stdio.h>


/**
 617. 合并二叉树
 
 给定两个二叉树，想象当你将它们中的一个覆盖到另一个上时，两个二叉树的一些节点便会重叠。
 
 你需要将他们合并为一个新的二叉树。合并的规则是如果两个节点重叠，那么将他们的值相加作为节点合并后的新值，否则不为 NULL 的节点将直接作为新二叉树的节点。
 
 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/merge-two-binary-trees
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 
 
 示例:
 [1,3,2,5]
 [2,1,3,null,4,null,7]
 
 合并后:
 [3,4,5,5,4,null,7]
 
 
 注意: 合并必须从两个树的根节点开始.
 */


/// 树的结构定义
typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode, * PTreeNode;

/// 创建一个新节点
/// val 新节点的值
PTreeNode createNode(int val);

/// 打印一个树
/// @param tree 树
void showTree(PTreeNode tree);

/// 合并两个树
/// @param t1 第一个树
/// @param t2 第二个数
struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2);

#endif /* MergeTrees_h */
