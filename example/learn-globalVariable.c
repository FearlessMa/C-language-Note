/*
 * @Author: mhc 
 * @Date: 2018-07-09 16:03:25 
 * @Last Modified by: mhc
 * @Last Modified time: 2018-07-09 16:13:18
 */

/* 全局变量自声明位置开始到程序运行都可使用 */

#include <stdio.h>
int a;
void fun();

int main()
{
    a = 3;
    printf("main 中直接使用 a=%d\n", a);
    a = 4;
    fun();
};

void fun()
{
    printf("fun 函数中使用的 global variable a=%d", a);
};