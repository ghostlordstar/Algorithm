//
//  HammingDistance.c
//  AIgorithm
//
//  Created by apple on 2020/5/25.
//  Copyright © 2020 walker. All rights reserved.
//

#include "HammingDistance.h"

///  计算汉明距离
/// @param x 第一个数
/// @param y 第二个数
int hammingDistance(int x, int y) {
    
    // 异或运算
       int a = y^x;
       int dis = 0;
       
       // 对异或运算后的值进行除二取余
       while(a != 0) {
           
           if (a % 2 == 1) {
               dis ++;
           }
           a = a / 2;
       }
       
       return dis;
}
