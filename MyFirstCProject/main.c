//
//  main.c
//  MyFirstCProject
//
//  Created by 赵英坤 on 2017/10/19.
//  Copyright © 2017年 赵英坤. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "testStruct.h"
#include "testIO.h"
#include "testFile.h"
#include "testFile.h"

#define MAX 101
typedef int (*P) (int,int);

int returnMax(int ,int );

void getNum(int num){
    printf("%d",num);
}

void testCallback(void (*callback)(int),int num){
    callback(num);
}

//定义带参回调函数
void PrintfText(char* c)
{
    printf("%s", c);
}

//定义实现带参回调函数的"调用函数"
void CallPrintfText(void (*callfuct)(char*),char* c)
{
    callfuct(c);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //    itoa();
//    P p;
//    p = returnMax;
//    printf("%d\n",p(23,42));
//    printf("%d\n",MAX);
//    testCallback(getNum(12),100);
//    CallPrintfText(PrintfText,"Hello World!\n");

//    call1(testcallback, 2);

//    testStruct();
//    testScanf();
//    testGetPut();
//    testFOpen();
//    testFPrint();
//    readAllFile();
//    testDMethod();
//    testFactorial();
//    testFibonacci();
//    testVariable();
    testMalloc();
    return 0;
}

int returnMax(int x,int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}
