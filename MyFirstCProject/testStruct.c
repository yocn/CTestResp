//
//  testStruct.c
//  MyFirstCProject
//  测试结构体
//  Created by 赵英坤 on 2017/10/23.
//  Copyright © 2017年 赵英坤. All rights reserved.
//

#include "testStruct.h"
#include <string.h>

void printBook(struct Book *book);
void testStruct(){
   struct Book book1;
   struct Book book2;
    book1.id = 1;
    strcpy(book1.Title , "Book1");
    strcpy(book1.author , "Yocn");
    
    book2.id = 2;
    strcpy(book2.Title , "Book2");
    strcpy(book2.author , "Jack");
    
    printBook(&book1);
    printBook(&book2);
}

void printBook(struct Book *book){
    printf( "Book title : %s\n", book->Title);
    printf( "Book author : %s\n", book->author);
    printf( "Book book_id : %d\n", book->id);
}


