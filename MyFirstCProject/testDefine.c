//
//  testDefine.c
//  MyFirstCProject
//
//  Created by 赵英坤 on 2017/10/25.
//  Copyright © 2017年 赵英坤. All rights reserved.
//

#include "testDefine.h"

#define testDefineMethod(a,b) \
printf(#a "And" #b ", We Love You!\n");

#define MESSAGE "test"

#if !defined (MESSAGE)
#define MESSAGE "yocn"
#endif

#define square(x) ((x)*(x))

void testDMethod(){
    printf("FILE %s \n",__FILE__);
    printf("TIME %s \n",__TIME__);
    printf("DATE %s \n",__DATE__);
    printf("LINE %d \n",__LINE__);
    testDefineMethod(1 ,  2 );
    
    printf("%s \n",MESSAGE);
    
    printf("%d \n",square(23));
}
