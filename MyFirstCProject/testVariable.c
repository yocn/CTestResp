//
//  testVariable.c
//  MyFirstCProject
//
//  Created by 赵英坤 on 2017/10/30.
//  Copyright © 2017年 赵英坤. All rights reserved.
//

#include "testVariable.h"


void testVariable(){
    testAvriage(4, 2,3,4,50);
}

void testAvriage(int num,...){
    double result = 0;
    va_list vaList;
    va_start(vaList, num);
    for (int i = 0; i<num; i++) {
       result += va_arg(vaList, int);
    }
    printf("结果是%lf\n",result/num);
    va_end(vaList);
}
