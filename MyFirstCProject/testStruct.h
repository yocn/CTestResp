//
//  testStruct.h
//  MyFirstCProject
//
//  Created by 赵英坤 on 2017/10/23.
//  Copyright © 2017年 赵英坤. All rights reserved.
//

#ifndef testStruct_h
#define testStruct_h

#include <stdio.h>

struct Book{
    char Title[10];
    char author[10];
    int id;
};

void printBook(struct Book* book);

void testStruct(void);
#endif /* testStruct_h */
