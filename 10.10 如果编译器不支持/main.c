//
//  main.c
//  10.10 如果编译器不支持
//
//  Created by Affee on 2018/5/17.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>
#define SIZE 10

int sum(int ar[],int n);

int main(int argc, const char * argv[]) {
    int marbles[SIZE] = {20,10,5,29,4,17.19,28,31,20};
    long answer;
    answer = sum(marbles,SIZE);
    printf("The total number of marbles is %ld,\n",answer);
    printf("The size of marbles is %zd bytes.\n",sizeof marbles);
    
    return 0;
}

int sum(int ar[],int n )
{
    int i;
    int total = 0;
    
    for (i = 0; i < n; i++) {
        total += ar[i];
        printf("The size of ar is %zd bytes.\n",sizeof ar);
        
    }
    return total;
}
