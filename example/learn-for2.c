/*
 * @Author: mhc 
 * @Date: 2018-07-04 17:23:10 
 * @Last Modified by: mhc
 * @Last Modified time: 2018-07-04 17:28:59
 */

#include <stdio.h>
int main()
{
    int s, m;
    for (m = 112; m != 0; m /= 10)
    {
        s = m % 10;
        printf("s=%d,m=%d\n", s, m);
    }
}