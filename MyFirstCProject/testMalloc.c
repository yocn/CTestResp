//
//  testMalloc.c
//  MyFirstCProject
//
//  Created by 赵英坤 on 2017/10/30.
//  Copyright © 2017年 赵英坤. All rights reserved.
//

#include "testMalloc.h"

struct{
    char name[100];
    char *description;
}stu;

void testMalloc(){
    strcpy(stu.name,"Kevin");
    
    stu.description = malloc(100 * sizeof(char));
    if(stu.description == NULL){
        fprintf(stderr, "Error malloc Memory Fail!");
    }else{
        strcpy(stu.description, "This is Kevin's Description~");
    }
    printf("name:%s\nDescription:%s\n",stu.name,stu.description);
    
    stu.description = realloc(stu.description, 100 * sizeof(char));
    if(stu.description == NULL){
        fprintf(stderr, "Error malloc Memory Fail!");
    }else{
        strcpy(stu.description, "This is Kevin's Second Description~");
    }
    printf("name:%s\nDescription:%s\n",stu.name,stu.description);
    
    free(stu.description);
    
}
