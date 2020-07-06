/*
 * 编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)，换行表示结束符，不算在字符里。不在范围内的不作统计。多个相同的字符只计算一次
 * 输入：
 *     abaca
 * 输出：
 *     3
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1024];
    int len = 0, i = 0, j = 0;
    char data[128] = {0};
    
    gets(str);
    len = strlen(str);
    
    for (i = 0;i < len; i++)
    {
        if (str[i] >= 0 && str[i] <= 127)
        {
            data[str[i]]++;
        }
    }
    
    for (i = 0; i < 128; i++) 
    {
        if (data[i] > 0) 
        {
            j++;
        }
    }
    
    printf("%d", j);
}