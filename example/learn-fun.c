/*
 * @Author: mhc 
 * @Date: 2018-07-09 14:54:01 
 * @Last Modified by: mhc
 * @Last Modified time: 2018-07-09 16:54:31
 */

#include <stdio.h>

int outputStr(int a[], int b[])
{   
    printf("数组作为参数：\n");
    printf("a,b交换前结果:\na=%d\nb=%d\n", a[0], b[0]);
    int c;
    c = a[0];
    a[0] = b[0];
    b[0] = c;
    printf("a,b交换后结果:\na=%d\nb=%d\n", a[0], b[0]);
};
int printfArray(int a[], int len);

int main()
{
    int len, d[] = {1, 2, 3}, e[] = {3, 2, 1}, f = 1, g = 2;
    outputStr(d, e);
    printfArray(d, 3);
    printf("\nd[0]的内存地址：%x\n", &d[0]);
    printfArray(e, 3);
};

int printfArray(int a[], int len)
{
    printf("数组内容为：");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }
};