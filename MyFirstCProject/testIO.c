//
//  testIO.c
//  MyFirstCProject
//
//  Created by 赵英坤 on 2017/10/23.
//  Copyright © 2017年 赵英坤. All rights reserved.
//

#include "testIO.h"

void testScanf(){
    float f;
    char c[100];
    printf("Please Enter a Num:");
    scanf("%f %s",&f,c);
    printf("The F is %f and %s \n",f,c);
}

void testGetPut(){
    char s[100];
    printf("Please Enter a String:");
    gets(s);
    printf("Your String:");
    puts(s);
    printf("\n");
}

