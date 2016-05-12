//
//  main.c
//  印三角形
//  Created by 蘇士修 on 2016/5/13.
//  Copyright © 2016年 Su Justin. All rights reserved.
//

#include <stdio.h>

//印空白
void temp(int i){
    if (i > 0){
        printf(" ");
        temp(i-1);
    }
}
//印右下三角形，0為起點
void temp2(int i,int j){
    if (i < j){
        printf("*");
        temp2(i+1,j);
    }
}
//印靠左三角形，1為起點
void temp3(int i,int j){
    if (i <= j){
        printf("*");
        temp3(i+1,j);
    }
}

void A(int i,int j){
    if(i > 0){
        temp(i-1);
        temp2(i,j);
        temp3(i,j);
        printf("\n");
        A(i-1,j);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int i;
    printf("Number:");
    scanf("%d",&i);
    A(i,i);
    return 0;
}