//
//  QuickSort.c
//  AIgorithm
//
//  Created by apple on 2020/5/15.
//  Copyright © 2020 walker. All rights reserved.
//

#include "QuickSort.h"

/// 快速排序
/// @param arr 需要排序的数组
/// @param left 开头下标
/// @param right 结束下标
void quickSort(int *arr, int left, int right) {
    
    if (left < right) {
        
        int pos = findPos(arr, left, right);
        quickSort(arr, left, pos - 1);
        quickSort(arr, pos + 1, right);
    }
}

/// 找到val应该在的下标
/// @param arr 数组
/// @param left 开始的下标
/// @param right 结束的下标
int findPos(int *arr, int left, int right) {
    
    int val = arr[left];
    
    while (left < right) {
        
        // 找到右边小于val的值,并交换到左边
        while (arr[right] >= val && left < right) {
            right --;
        }
        arr[left] = arr[right];
        
        // 找到左边大于val的值,并交换到右边
        while (left < right && arr[left] <= val) {
            left ++;
        }
        arr[right] = arr[left];
    }
    
    arr[left] = val;
    
    return left;
}
