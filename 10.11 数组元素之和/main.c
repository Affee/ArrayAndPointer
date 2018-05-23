//
//  main.c
//  10.11 数组元素之和
//
//  Created by Affee on 2018/5/17.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>
#define SIZE 10
int sump(int *start,int *end);

int main(int argc, const char * argv[]) {
    int ress[10] = {10,21,3,42,12,31,21,23,123,11};
    long answee;
    
    answee = sump(ress, ress + SIZE);
    printf("The tolal number of ress is %ld.\n",answee);
    
    
    return 0;
}

//使用指针算法
int sump(int *start,int *end)
{
    int total = 0;
    while (start < end ) {
        total += *start;
        start++;
    }
    return total;
}
