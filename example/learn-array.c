/*
 * @Author: mhc 
 * @Date: 2018-07-04 19:52:47 
 * @Last Modified by: mhc
 * @Last Modified time: 2018-07-04 19:57:05
 */

#include <stdio.h>
int main()
{
    int i = 0, a[] = {1, 2, 3, 4, 5}, b[5] = {6, 7, 8, 9, 10};
    char str[] = {"sting Array"};
    printf("整型数组:\n");
    printf("整型数组length=%lu\n", sizeof(a) / sizeof(a[0]));
    while (i < 5)
    {
        printf("a[%d]=%d\n", i, a[i]);
        i++;
    }
    printf("字符型数组:\n");
    printf("字符型数组的length=%lu\n",sizeof(str)/sizeof(str[0]));
    puts(str);
}