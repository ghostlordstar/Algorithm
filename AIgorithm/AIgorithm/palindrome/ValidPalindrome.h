//
//  ValidPalindrome.h
//  AIgorithm
//
//  Created by apple on 2020/5/19.
//  Copyright © 2020 walker. All rights reserved.
//

#ifndef ValidPalindrome_h
#define ValidPalindrome_h

#include <stdio.h>
#include <stdbool.h>
/**
 https://leetcode-cn.com/problems/valid-palindrome-ii/
 
 给定一个非空字符串 s，最多删除一个字符。判断是否能成为回文字符串。
 
 示例 1:

 输入: "aba"
 输出: True
 
 示例 2:

 输入: "abca"
 输出: True
 解释: 你可以删除c字符。
 
 注意:

 字符串只包含从 a-z 的小写字母。字符串的最大长度是50000。
 */

// 判断一个字符串是否是回文字符串
bool isPlalindrome(char *start, char *end);

bool validPalindrome(char * s);


#endif /* ValidPalindrome_h */
