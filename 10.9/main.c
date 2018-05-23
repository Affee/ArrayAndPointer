//
//  main.c
//  10.9
//
//  Created by Affee on 2018/5/16.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>
#define MONTHS 12

int main(int argc, const char * argv[]) {
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;
    for (index = 0; index <MONTHS; index++) {
        printf("Month %2d has %d ==== %d days .\n ",index+1,*(days + index),days[index]);
    }
    
    return 0;
}
