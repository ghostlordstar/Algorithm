//
//  Sum.h
//  Algorithm
//
//  Created by apple on 2020/5/8.
//  Copyright © 2020 apple_MBP. All rights reserved.
//

#ifndef Sum_h
#define Sum_h

#include <stdio.h>

/**
 解决从1-100所有整数的和的问题
 */


/// 计算min 到 max的所有整数的和
/// 使用递归算法 O(n)
/// @param min 最小值
/// @param max 最大值
int sum(int min, int max);

/// 计算min 到 max的所有整数的和
/// 高斯算法 O(n)
/// @param min 最小值
/// @param max 最大值
int sumGauss(int min, int max);


#endif /* Sum_h */
