//
//  LargestNumber.c
//  Algorithm
//
//  Created by apple on 2020/5/8.
//  Copyright © 2020 apple_MBP. All rights reserved.
//

#include "LargestNumber.h"
#include <stdlib.h>
#include <string.h>

/// 比较谁的高位大
/// @param a 数字a
/// @param b 数字b
int cmpStr(int *a , int *b) {
    
    char s1[30];
    char s2[30];
    // 转字符串
    sprintf(s1, "%d%d", *b, *a);
    sprintf(s2, "%d%d", *a, *b);
    // 比较字符串，s1>s2 返回值大于0，s1=s2 返回值为0， s1<s2 返回值小于0
    return strcmp(s1, s2);
}

/// 传入一个int数组，拼成一个最大的数，用字符串输出
/// @param arr int数组
/// @param count int数组元素个数
char * largestNumber(int * arr, int count) {
    
    /// 比较函数
    /// @param base  指向要排序的数组的第一个元素的指针
    /// @param nel 由 base 指向的数组中元素的个数
    /// @param width 数组中每个元素的大小，以字节为单位
    /// @param compar 比较函数，回调函数
    qsort(arr, count, sizeof(int), (int (* _Nonnull)(const void *, const void *))cmpStr);
    
    if (arr[0] == 0) return "0";
    
    char *str, *tmp;
    
    str = (char *)malloc(sizeof(char *) * 1000);
    
    tmp = str;
    
    for (int i = 0; i < count; i ++) {
        // 转字符串
        sprintf(tmp, "%d", arr[i]);
        // 将中间变量的指针向前移
        tmp += strlen(tmp);
    }
    
    return str;
}
