//
//  main.c
//  Algorithm
//
//  Created by apple on 2020/5/8.
//  Copyright © 2020 apple_MBP. All rights reserved.
//

#include <stdio.h>

#include "Sum.h"
#include "LargestNumber.h"
#include "bubbleSort.h"
#include "SelectionSort.h"
#include "QuickSort.h"
#include "ValidPalindrome.h"
#include "MergeTrees.h"
#include "HammingDistance.h"

int main(int argc, const char * argv[]) {
    
    //#pragma mark - sum 算法 --
    //    printf("------ sum 算法 ------\n");
    //
    //    int min = 2;
    //    int max = 100;
    //
    //    printf("%d - %d 的所有整数和为:%d\n", min, max, sum(min, max));
    //
    //    printf("%d - %d 的所有整数和为:%d\n", min, max, sumGauss(min, max));
    //
    //#pragma mark - largestNumber 算法 --
    //
    //    printf("------ largestNumber 算法 ------\n");
    //
    //    int arr[5] = {3,30,34,5,9};
    //
    //    char * str = largestNumber(arr, 5);
    //
    //    printf("%s\n", str);
    //
    //#pragma mark - 排序 算法 --
    //
    //    printf("------ 排序 算法 ------\n");
    //
    //    int sortArray[10] = {7,2,6,1,5,8,4,3,9,0};
    //    // 冒泡排序
    ////    bubbleSort(sortArray, 10);
    //    // 选择排序
    ////    selectionSort(sortArray, 10);
    //    // 快速排序
    //    quickSort(sortArray, 0, 9);
    //
    //    for (int i = 0; i < 10; i++) {
    //
    //        printf("%d\n",sortArray[i]);
    //    }
    
    //#pragma mark - 验证回文字符串 算法 --
    //
    //    char * s = "abca";
    //
    //    if (validPalindrome(s)) {
    //        printf("\'%s\'可以在删除一个字符的条件下形成回文字符串\n",s);
    //    }else {
    //        printf("\'%s\'不可以在删除一个字符的条件下形成回文字符串\n",s);
    //    }
    //
    
    //#pragma mark - 简单二叉树合并 --
    //    PTreeNode t1_1 = createNode(1);
    //    PTreeNode t1_3 = createNode(3);
    //    PTreeNode t1_2 = createNode(2);
    //    PTreeNode t1_5 = createNode(5);
    //
    //    t1_1->left = t1_3;
    //    t1_3->left = t1_5;
    //    t1_1->right = t1_2;
    //
    //    printf("-------第一个树-------\n");
    //
    //    showTree(t1_1);
    //
    //    PTreeNode t2_1 = createNode(2);
    //    PTreeNode t2_2 = createNode(1);
    //    PTreeNode t2_3 = createNode(3);
    //    PTreeNode t2_5 = createNode(4);
    //    PTreeNode t2_7 = createNode(7);
    //
    //    t2_2->right = t2_5;
    //    t2_1->left = t2_2;
    //    t2_3->right = t2_7;
    //    t2_1->right = t2_3;
    //    printf("-------第二a个树-------\n");
    //    showTree(t2_1);
    //
    //    printf("-------合并后--------\n");
    //
    //    showTree(mergeTrees(t1_1, t2_1));
    
#pragma mark - 461. 汉明距离 算法 --
    
    int x = 1;
    int y = 4;
    
    printf("%d和%d的汉明距离是:%d\n",x,y,hammingDistance(x, y));
    
    return 0;
}

