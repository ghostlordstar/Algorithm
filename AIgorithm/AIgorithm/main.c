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
#include "bubbleSort.h"
int main(int argc, const char * argv[]) {
    
#pragma mark - sum 算法 --
    printf("------ sum 算法 ------\n");

    int min = 2;
    int max = 100;

    printf("%d - %d 的所有整数和为:%d\n", min, max, sum(min, max));

    printf("%d - %d 的所有整数和为:%d\n", min, max, sumGauss(min, max));

#pragma mark - largestNumber 算法 --

    printf("------ largestNumber 算法 ------\n");

    int arr[5] = {3,30,34,5,9};

    char * str = largestNumber(arr, 5);

    printf("%s\n", str);
    
#pragma mark - 排序 算法 --
    
    printf("------ 排序 算法 ------\n");
    
    int sortArray[10] = {7,2,6,1,5,8,4,3,9,0};
    
    bubbleSort(sortArray, 10);
    
    for (int i = 0; i < 10; i++) {
        
        printf("%d\n",sortArray[i]);
    }
    
    return 0;
}

