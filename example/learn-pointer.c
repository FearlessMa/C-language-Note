/*
 * @Author: mhc 
 * @Date: 2018-07-11 10:50:34 
 * @Last Modified by: mhc
 * @Last Modified time: 2018-07-11 11:15:44
 */

#include <stdio.h>

int main()
{
    int i ;
    int * i_pointer;
    i_pointer = &i;
    *i_pointer = 3;
    printf("i的内存地址为:%p\n",i_pointer);
    printf("通过*i_pointer为i赋值，i的值为:%d\n",i);
}