//
//  testRecursion.c
//  MyFirstCProject
//
//  Created by 赵英坤 on 2017/10/30.
//  Copyright © 2017年 赵英坤. All rights reserved.
//

#include "testRecursion.h"
//
double factorial1(int i){
    if(i<=1){
        return 1;
    }else{
        return i * factorial1(i-1);
    }
}
//测试递归
void testFactorial(){
    
    printf("15的递归是%lf\n",factorial1(15));
}

int factorial2(int i){
    if(i<=1){
        return i;
    }
    return factorial2(i-1)+factorial2(i-2);
}

void testFibonacci(){
    int final = 20;
    for(int i = 0;i<final;i++){
        printf("%d ",factorial2(i)) ;
    }
    printf("\n");
}


