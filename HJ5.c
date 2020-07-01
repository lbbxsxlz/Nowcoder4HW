/*
 * 题目描述
 * 	写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。（多组同时输入 ）
 *
 * 输入
 *   0xA
 * 输出
 *   10
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
    char str[100];
    int i, len, sum, tmp;
    while(gets(&str))
    {
        len = strlen(str);
        sum = 0;
        for(i = len - 1; i >=0; i--)
        {
            if (str[i] >= 'A' && str[i] <= 'F')
            {
                sum = sum + (str[i] - 55) * pow(16, len - i - 1);
            }
            else if (str[i] >= '0' && str[i] <= '9')
            {
                sum = sum + (str[i] - 48) * pow(16, len - i - 1);
            }
        }
        printf("%d \n", sum);
    }
     
}

