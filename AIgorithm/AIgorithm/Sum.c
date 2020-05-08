//
//  Sum.c
//  Algorithm
//
//  Created by apple on 2020/5/8.
//  Copyright © 2020 apple_MBP. All rights reserved.
//

#include "Sum.h"

/// 计算min 到 max的所有整数的和
/// 使用递归算法 O(n)
/// @param min 最小值
/// @param max 最大值
int sum(int min, int max) {
    
    int retSum = max;
    
    if (min >= max) {
        return min;
    }else {
        return retSum += sum(min, max - 1);
    }
}

/// 计算min 到 max的所有整数的和
/// 高斯算法 O(n)
/// @param min 最小值
/// @param max 最大值
int sumGauss(int min, int max) {
    
    if ((max - min) % 2 != 0) {
        return (max + min) * ((max - min + 1) / 2);
    }else {
        return (max + min) * ((max - min) / 2) + (max + min) / 2;
    }
}
