/*
 * 连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组；
 * 长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。
 * 输入
 *     abc
 *     123456789
 * 输出
 *     abc00000
 *     12345678
 *     90000000
 */

#include <stdlib.h>
#include <stdio.h>
 
int main()
{
    char str[100];
    int j = 0;
     
    while(gets(&str) != NULL)
    {
        long len = strlen(str);
        long rem = len % 8;
        for (j = 0; j < len; j++)
        {
            printf("%c", str[j]);
            if ((j+1)%8 == 0)
                printf("\n");
        }
 
        if (rem != 0)
        {
            for (j = rem; j < 8; j++)
            {
                printf("0");
            }
            printf("\n");
        }
    }
}

