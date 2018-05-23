//
//  main.c
//  10.13 指针操作
//
//  Created by Affee on 2018/5/18.
//  Copyright © 2018年 affee. All rights reserved.
//
/*
 指针操作
 C提供了一些基本的指针操作，下面是8中不同操作，为了显示每种操作的结果，改程序打印了指针的值（该指针指向的地址），存储在指针指向地址上的值，以及指针自己的地址
 
 以下是8中基本操作
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int urn[5] = {100,200,300,400,500};
    int *ptr1,*ptr2,*ptr3;
    
    ptr1 = urn; // 把一个地址赋给指针
    ptr2 = &urn[2];
    
    printf("pointer value,dereferenced pointer ,pointer address:\n");
    printf("ptr1 = %p,*ptr1 = %d,&ptr1 = %p\n",ptr1,*ptr1,&ptr1);
    
//    指针加法
    ptr3 = ptr1 +4;
    printf("\nadding an  int to a pointer:\n");
    printf("ptr1 + 4 = %p, *(ptr1 +4 ) = %d,&urn[4] == %d\n",ptr1+4,*(ptr1 + 4),urn[4]);
    printf("ptr1 + 2 = %p, *(ptr1 +2 ) = %d\n",ptr1+2,*(ptr1 + 2));
    
    ptr1++;  //递增指针
    printf("\nvalues after ptr1++ :\n");
    printf("ptr1 = %p,*ptr1 = %d,&ptr1 = %p\n",ptr1,*ptr1,&ptr1);
    ptr2--;    //递减指针
    printf("\nvalues after ---ptr2:\n");
    printf("ptr2 = %p,*ptr2 = %d,&ptr2 = %p\n",ptr2,*ptr2,&ptr2);
    --ptr1;     //恢复为初始值
    ++ptr2;     //恢复为初始值
    printf("\nPointers reset to original values:\n");
    printf("ptr1 = %p,ptr2 = %p\n",ptr1,ptr2);
//    一个指针减去另外一个指针
    printf("\nsubtracting one pointer from another:\n");
    printf("ptr2 = %p ,ptr1 = %p ,ptr2 -ptr1 = %td\n",ptr2,ptr1,ptr2 - ptr1);
//    一个指针减去一个整数
    printf("\nsubtracting an int from a pointer:\n");
    printf("ptr3 = %p,ptr3 - 2 = %p \n",ptr3, ptr3 - 2);
    printf("ptr3 = %p,ptr3 + 2 = %p \n",ptr3, ptr3 + 2);
    
    return 0;
}
/*
 pointer value,dereferenced pointer ,pointer address:
 ptr1 = 0x7ffeefbff540,*ptr1 = 100,&ptr1 = 0x7ffeefbff528
1.赋值，可以吧地址赋值给指针。如，用数组名，带地址运算符(&)的变量名，两外一个指针进行赋值，在该例中，吧urn数组的手地址给ptr1，该地址的编号恰好是0x7ffeefbff540,变量ptr2获得数组urn的第三个元素（urn[2]）的地址。注意，地址应该和指针兼容。也就是说，不能吧double类型的地址赋给指向int的指针，至少避免不明智的类型转换。
 2.解引用：*运算符给指针指向地址的值。因此，*ptr1的初值为100，该值存储在编号为0x7ffeefbff540的地址上面。
 3.取值：和变量一样，指针的变量也有自己的地址和值。对指针而言，&运算符给出指针本身的地址。 ptr1存储的内存编号为0x7ffeefbff528的低智商，该存储单元存储的内容是0x7ffeefbff540，既urn的地址。因此，&ptr1是指向ptr1的指针，而ptr1是指向utn[0]的指针，
    ptr1 = 0x7ffeefbff540,*ptr1 = 100,&ptr1 = 0x7ffeefbff528，
 
4.指针与证书相加：可以使用+运算符吧指针与证书相加，或证书与指针相加，无论那种情况，证书都会和指针所指向类型的大小(依字节为单位)相乘，然后吧结果与初始化地址相加。因此ptr1+4与&urn[4]等价的。如果想家的结果超出了初始化指针指向的数组范围，计算结果则是未定义的。除非正好超过数组末尾第一个位置，C保证指针有效。
 adding an  int to a pointer:
 ptr1 + 4 = 0x7ffeefbff550, *(ptr1 +4 ) = 500,&urn[4] == 500
 ptr1 + 2 = 0x7ffeefbff548, *(ptr1 +2 ) = 300

 5.递增指针：递增指向数组元素的指针可以让该指针移动至数组的下一个元素。因此，ptr1++ 相当于吧ptr1的值加上4(int 为4个字节)，ptr1指向urn[1]，如图。现在ptr1的值是0x7ffeefbff544，也就是数组的下一个元素的地址，*ptr1的值为200，即urn[1]的值。注意ptr1本身的地址任然是0x7ffeefbff528。因为，变量不会因为值发生变化就移动位置的。
     adding an  int to a pointer:
     ptr1 + 4 = 0x7ffeefbff550, *(ptr1 +4 ) = 500,&urn[4] == 500
     ptr1 + 2 = 0x7ffeefbff548, *(ptr1 +2 ) = 300

     values after ptr1++ :
     ptr1 = 0x7ffeefbff544,*ptr1 = 200,&ptr1 = 0x7ffeefbff528

 6.指针减去一个整数：可以使用-运算符从一个指针中减去一个整数。指针必须是从第一个运算对象，去乘积。所以ptr3-2与&urn[2]等价，因为ptr3指向的是&arn[4]。如果想家的结果超出了初始化指针指向的数组范围，计算结果则是未定义的。除非正好超过数组末尾第一个位置，C保证指针有效。
 subtracting an int from a pointer:
 ptr3 = 0x7ffeefbff550,ptr3 - 2 = 0x7ffeefbff548
 ptr3 = 0x7ffeefbff550,ptr3 + 2 = 0x7ffeefbff558
 
 7.递减指针，参考递增指针
 
 8.指针求差：可以计算两个指针的差值，通常，求差的两个指针分别指向同一个数组的不同元素，通过计算求出两个元素之间的距离。差值的单位与数组类型的单位相同。如程序中，ptr2 - ptr1得2，意思是这两个指针所指的两个袁术像个两个int，而不是2个字节。只要两个指针都指向相同的数组(或者其中一个指针指向数组后面的第1个地址)，C都是能保证相减运算有效。如果指向两个不同数组的指针进项秋茶运算可能会得到一个值，或者导致运行时错误。
    
 9.比较：使用关系运算符可以比较两个指针的值，前提是两个指针都是指向相同类型的对象。
 PS：注意这两个减法有两种，可以用一个指针减去另外一个指针得到一个整数，活用一个指针减去一个整数得到另外一个指针。
 
 PS2：在递增或者递减指针时，还要注意一些问题，编译器不会检查指针是否仍指向数组元素。C只能保证指向数组中任意元素的指针和指向数组后面第一个位置的指针有效。但是如果递增或者递减一个指针超过了这个范围，则是未定义。另外，可以解引用指向数组任意元素的指针。但是即使指针指向数组后面一个位置是有效的，也能解引用这样的越界指针。
 
 
 */

