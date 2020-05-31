//
//  MoreTimeChar.c
//  AIgorithm
//
//  Created by apple on 2020/5/29.
//  Copyright © 2020 walker. All rights reserved.
//

#include "MoreTimeChar.h"
#include <string.h>
/// 出现次数最多的字符
/// @param s 传入的字符串
char moreTimeChar(char *s) {
    
    int countArray[30];
    unsigned long count = strlen(s);
    char *tmpS = s;
    
    
    int max = 0;
    char mc = '\0';
    for (int i = 0; i < count ; i ++) {
        
        int tmpCount = countArray[(int)(*tmpS) - (int)'a'] ++;
        
        if (tmpCount > max) {
            max = tmpCount;
            mc = *tmpS;
        }
        tmpS ++;
    }
    
    return mc;
}
