/*
 * @Author: mhc 
 * @Date: 2018-07-04 16:53:14 
 * @Last Modified by: mhc
 * @Last Modified time: 2018-07-04 16:56:54
 */

#include <stdio.h>
int main()
{
    int a, b, c;
    for (a = 1; a <= 9; a++)
    {
        for (b = 1; b <= 9; b++)
        {
            c = a * b;
            printf("%d*%d=%d\t", a, b, c);
            if (b == 9)
            {
                printf("\n");
            }
        }
    }
}