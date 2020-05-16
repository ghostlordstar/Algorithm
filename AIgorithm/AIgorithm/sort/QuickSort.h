//
//  QuickSort.h
//  AIgorithm
//
//  Created by apple on 2020/5/15.
//  Copyright © 2020 walker. All rights reserved.
//

#ifndef QuickSort_h
#define QuickSort_h

#include <stdio.h>

/**
 利用分治原则处理进行排序
 */

/// 快速排序
/// @param arr 需要排序的数组
/// @param left 开头下标
/// @param right 结束下标
void quickSort(int *arr, int left, int right);


/// 找到val应该在的下标
/// @param arr 数组
/// @param left 开始的下标
/// @param right 结束的下标
int findPos(int *arr, int left, int right);

#endif /* QuickSort_h */
