/*
* 写出一个程序，接受一个由字母和数字组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。
*
* 测试用例：
*
* 输入：
*	ABCDEF
*   A
* 输出：
*	1
*
*/


#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char str[1024];
     
    gets(&str);
    char chact;
    scanf("%c", &chact);
     
    int i = 0, j = 0;
     
    for (; i < strlen(str); i++)
    {
        if (chact == str[i] || chact == str[i] + 32 || chact == str[i] - 32)
        {
            j++;
        }
         
    }
     
    printf("%d", j);
}

