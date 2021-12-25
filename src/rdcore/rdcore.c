/*
*   Copyright (c) 2021 ExFighter. 
*   文件名: rdcore.c
*   文件内容: RandomSeat的抽号算法实现
*/

#include"rdcore.h"

int initSeat(struct _Seats* seats, int pernum){
    seats->seatnum  = pernum;
    seats->seatList = (int*)malloc((pernum+2)*sizeof(int));
    int stLstTmp[] = seats->seatList;
    for(int count=0; count<=pernum; count++) {
        stLstTmp[count] = count ;               //数组写法有问题?
    }
    return 0 ;
}


int rmSeat(struct _Seats* seats, int seatRm){
    if(seats->seatnum == 0)return -2;
    int* stRmTmp = (seats->seatList)+seatRm;
    int* stEndTmp= (seats->seatList)+(seats->seatnum);
    int mid=0;
    Swap((*stRmTmp), (*stEndTmp), mid);
    (seats->seatnum)--;
    return (seats->seatnum);
}

//未完待续...
