/*
 * 将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”，所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符。
 *
 * 输入：
 *     i am a boy
 * 输出：
 *     boy a am i
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10000];
    int a,len,i;
    gets(str);
    len = strlen(str);
    for(i=len-1;i>=0;i--)
    {
        if(str[i]==' ')
        {
            a = i+1;
            while(str[a]!=' ')
            {
                if(a==len)
                    break;
                printf("%c", str[a]);
                a++;
            }
            printf(" ");
        }

    }
    i=0;
    while(str[i]!=' ')
    {
        printf("%c",str[i]);
        i++;
    }
    return 0;
}