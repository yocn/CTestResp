//
//  main1.c
//  MyFirstCProject
//
//  Created by 赵英坤 on 2017/10/19.
//  Copyright © 2017年 赵英坤. All rights reserved.
//

#include "main1.h"
#include "stdio.h"

int getNum(int* i){
    printf("%d",i);
}

void testCallBack((int*) (*callback)(int* i),int* i){
    callback(12);
}

//定义带参回调函数
void PrintfText(char* s)
{
    printf("%s", s);
}

//定义实现带参回调函数的"调用函数"
void CallPrintfText(void (*callfuct)(char*),char* s)
{
    callfuct(s);
}

//在main函数中实现带参的函数回调
int main(int argc,char* argv[])
{
    CallPrintfText(PrintfText,"Hello World!\n");
    testCallBack(getNum(34),12);
    return 0;
}
