//
//  bubbleSort.c
//  AIgorithm
//
//  Created by apple on 2020/5/10.
//  Copyright © 2020 walker. All rights reserved.
//

#include "bubbleSort.h"
#include <stdlib.h>
/// 冒泡排序
/// @param arr int 数组
/// @param count 数组元素个数
void bubbleSort(int *arr, int count) {
        
    for (int i = count - 1; i < count; i--) {
        for (int j = 0; j < i; j++) {
            if(arr[j] > arr[i]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
