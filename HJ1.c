/*
* �ַ������һ�����ʳ���
*
* ����������
*
* ���룺
*	hello world
* �����
*	5
*
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
int main()
{
    char* str1 = (char*)malloc(5000);
    gets(str1);
     
    int i= 0;
    int j = 0;
    int len = strlen(str1);
     
    for(i = len - 1; i >= 0;i--)
    {
        if (str1[i] == ' ')
            break;
        else
            j++;
    }
     
    printf("%d \n", j);
    free(str1);
}

