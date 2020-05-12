//
//  SelectionSort.c
//  AIgorithm
//
//  Created by apple on 2020/5/11.
//  Copyright © 2020 walker. All rights reserved.
//

#include "SelectionSort.h"

/// 选择排序
/// @param arr 需要排序的数组
/// @param count 数组元素的个数
void selectionSort(int *arr, int count) {
    
    for (int i = 0; i <count; i ++) {
        
        int minIndex = i;
        
        for (int j = i; j < count; j ++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        int tmp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = tmp;
    }
}
