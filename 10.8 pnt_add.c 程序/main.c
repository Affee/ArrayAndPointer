//
//  main.c
//  10.8 pnt_add.c 程序
//
//  Created by Affee on 2018/5/16.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>
#define SIZE 4
int main(int argc, const char * argv[]) {
    short dates[SIZE];
    short *pti;
    short index;
    double bills[SIZE];
    double *ptf;
    pti = dates;
    ptf = bills;
    printf("%23s %15s\n","short","double");
    for (index = 0 ; index <SIZE; index++) {
        printf("Pointers +%d: %10p %10p\n",index,pti +index,ptf+index);
    }
    
    return 0;
}
