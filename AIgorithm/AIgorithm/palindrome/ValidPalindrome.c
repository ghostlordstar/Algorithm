//
//  ValidPalindrome.c
//  AIgorithm
//
//  Created by apple on 2020/5/19.
//  Copyright © 2020 walker. All rights reserved.
//

#include "ValidPalindrome.h"

// 判断一个字符串是否是回文字符串
bool isPlalindrome(char *start, char *end) {
    
    while (start < end) {
        
        if (*start != *end) {
            return false;
        }
        
        start ++;
        end --;
    }
    
    return true;
}

bool validPalindrome(char * s) {
    
    int len = strlen(s);
    
    if (len <= 2) {
        return true;
    }
    
    char *start = s;
    char *end = s + len - 1;
    
    while (start < end) {
        
        if (*start != *end) {
        
            if (isPlalindrome(start + 1, end)) {
                return true;
            }
            
            if (isPlalindrome(start, end - 1)) {
                return true;
            }
            
            return false;
        }
        
        start ++;
        end --;
    }
    
    return true;
}
