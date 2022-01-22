/*
*   Copyright (c) 2021 ExFighter. 
*   文件名: rdcore.h
*   文件内容: RandomSeat的抽号算法定义
*/

#ifndef _RDST_CORE_H_
#define _RDST_CORE_H_

//包含的系统库
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

//包含的自带库
#include"../rdst.h"

/*
* 结构体: Seats [座位表]
*/
struct _Seats {
    int     seatnum;   //人数
    int*    list;      //座位表
}

/*
*   宏:交换两个变量x,y, 以mid为中介 
#define Swap(x,y,mid)   \
    mid=x;              \
    x=y;                \
    y=mid;
*/

/*宏:将数组numList的第src个元素移动到第target个元素*/
#define Move(numList, src, target) \
(*(numList+target))=(*(numList+src))

/*
*   函数: initSeat
*   功能: 初始化座位表
*   参数: 
      [struct _Seats* seats]待初始化的座位表
      [int pernum]人数
*   返回值: int整型, 0表示成功, -1表示失败, -2表示人数已尽 */
int initSeat(struct _Seats* seats, int pernum);

/*
*   函数: rmSeat
*   功能: 移除座位
*   参数: 
      [struct _Seats* seats]待处理的座位表
      [int seatRm]待移除座位号
*   返回值: int整型, 正数表示剩余座位数, -1表示失败 */
int rmSeat(struct _Seats* seats, int order);

//未完待续...


#endif
