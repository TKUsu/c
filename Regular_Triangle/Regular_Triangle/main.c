//
//  main.c
//  印三角形
//  Created by 蘇士修 on 2016/5/13.
//  Copyright © 2016年 Su Justin. All rights reserved.
//

#include <stdio.h>

//印空白
int temp(int i){
    if (i > 0){
        printf(" ");
        return temp(i-1);
    }return 0;
}
//印右下三角形，0為起點
int temp2(int i,int j){
    if (i < j){
        printf("*");
        return temp2(i+1,j);
    }return 0;
}
//印靠左三角形，1為起點
int temp3(int i,int j){
    if (i <= j){
        printf("*");
        return temp3(i+1,j);
    }return 0;
}

int A(int i,int j){
    if(i > 0){
        temp(i-1);
        temp2(i,j);
        temp3(i,j);
        printf("\n");
        return A(i-1,j);
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int i;
    printf("Number:");
    scanf("%d",&i);
    A(i,i);
    return 0;
}