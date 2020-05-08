//
//  main.c
//  Algorithm
//
//  Created by apple on 2020/5/8.
//  Copyright © 2020 apple_MBP. All rights reserved.
//

#include <stdio.h>
#include "Sum.h"
#include "LargestNumber.h"
int main(int argc, const char * argv[]) {
    
#pragma mark - sum 算法 --
    
    int min = 2;
    int max = 100;

    printf("%d - %d 的所有整数和为:%d\n", min, max, sum(min, max));

    printf("%d - %d 的所有整数和为:%d\n", min, max, sumGauss(min, max));

#pragma mark - largestNumber 算法 --
    
    int arr[5] = {3,30,34,5,9};
    
    char * str = largestNumber(arr, 5);
    
    printf("%s\n", str);
    
    
    
    
    return 0;
}

