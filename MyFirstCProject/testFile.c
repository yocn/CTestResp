//
//  testFile.c
//  MyFirstCProject
//
//  Created by 赵英坤 on 2017/10/23.
//  Copyright © 2017年 赵英坤. All rights reserved.
//

#include "testFile.h"

#define URI "yocnCforTest.txt"

void testFOpen(){
    printf("%s","testFOpen开始执行\n");

    FILE *fp = NULL;
    
    int result = 10;
    
    fp = fopen(URI, "a+");
    result = fprintf(fp, "我 有一个测试字符串fprintf..\n");
//    fseek(fp, -5, SEEK_CUR);
    printf("%d \n",result);
    result = fputs("你要干啥\n", fp);
    printf("%d \n",result);
    fclose(fp);
}

void testFPrint(){
    printf("%s","testFPrint开始执行\n");

    FILE *fp = NULL;
    char buff[255];
    
    fp = fopen(URI, "r");
    fscanf(fp, "%s", buff);//遇到空格的时候会停止读取
    printf("1 : %s\n", buff );

    fgets(buff, 255, (FILE*)fp);//遇到/n或者或者文件结尾的时候会停止读取
    printf("2: %s\n", buff );
    
    fgets(buff, 255, (FILE*)fp);
    printf("3: %s\n", buff );
    fclose(fp);
}

void readAllFile(){
    long positoin;
    int result;
    char* buffer;
    printf("%s","readAllFile开始执行\n");
    FILE *fp = NULL;
    fp = fopen(URI,"rb");
    
    fseek(fp, 0, SEEK_END);
    positoin = ftell(fp);//返回当前文件指针的位置
    rewind(fp);//设置给定流的文件的开头的文件位置
    
    buffer = malloc(sizeof(char)* positoin);
    if(buffer==NULL){
        printf("buffer是NULL");
        exit(2);
    }
    
    result = fread(buffer, 1, positoin, fp);
    if(result!=positoin){
        printf("fail");
        exit(3);
    }
    printf("%s",buffer);
    fclose(fp);
    free(buffer);
}




