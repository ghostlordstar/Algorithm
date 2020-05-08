//
//  ArrayToMax.h
//  Algorithm
//
//  Created by apple on 2020/5/8.
//  Copyright © 2020 apple_MBP. All rights reserved.
//

#ifndef LargestNumber_h
#define LargestNumber_h

#include <stdio.h>

/**
 给定一个Int型数组，用里面的元素组成一个最大数，因为数字可能非常大，用字符串输出。
 输入: [3,30,34,5,9]
 输出: 9 5 34 3 30
 */


/// 传入一个int数组，拼成一个最大的数，用字符串输出
/// @param arr int数组
/// @param count int数组元素个数
char * largestNumber(int * arr, int count);

#endif /* LargestNumber_h */
