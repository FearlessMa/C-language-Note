/*
 * @Author: mhc 
 * @Date: 2018-07-06 00:13:28 
 * @Last Modified by: mhc
 * @Last Modified time: 2018-07-09 11:32:44
 */

#include <stdio.h>

int main()
{
    int a[] = {3, 2, 4, 1}, i, j, s, isSorted, num, len, m = 0;
    len = sizeof(a) / sizeof(a[0]);
    for (j = 0; j < len - 1; j++)
    {
        printf("%d\n", m++);
        for (i = 0; i < len - 1 - j; i++)
        {
            if (a[i] > a[i + 1])
            {
                num = a[i];
                a[i] = a[i + 1];
                a[i + 1] = num;
            }
        }
    }
    for (s = 0; s < len; s++)
    {
        printf("%d ", a[s]);
    }
}