//
//  main.c
//  第十章 数组和指针
//
//  Created by Affee on 2018/5/11.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>
#define MONTHS 12

int main(int argc, const char * argv[]) {
    int days[MONTHS] = {31,28,30,30,31,28,30,30,31,28,30,30};
    
    for (int i = 0; i < MONTHS ; i++) {
        printf("Month %2d has %2d days.\n",i+1,days[i]);
    }
    return 0;
}
