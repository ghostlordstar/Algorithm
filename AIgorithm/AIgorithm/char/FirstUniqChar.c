//
//  FirstUniqChar.c
//  AIgorithm
//
//  Created by apple on 2020/5/29.
//  Copyright © 2020 walker. All rights reserved.
//

#include "FirstUniqChar.h"
#include <stdlib.h>
#include <string.h>

/// 字符串中的第一个唯一字
/// @param s 给定的字符串
int firstUniqChar(char * s) {
    
    int countArray[30] = {0};
    unsigned long count = strlen(s);
    const char *tmpS = s;
    
    
    for (int i = 0; i < count ; i ++) {
        
        countArray[(int)(*tmpS) - (int)'a'] += 1;
        
        tmpS ++;
    }
    
    tmpS = s;
    for (int i = 0; i < count; i++) {
        if (countArray[(int)(*tmpS) - (int)'a'] == 1) {
            return i;
        }
        tmpS ++;
    }
    
    return -1;
}
