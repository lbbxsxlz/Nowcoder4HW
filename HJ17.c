/*
 * 开发一个坐标计算工具， A表示向左移动，D表示向右移动，W表示向上移动，S表示向下移动。从（0,0）点开始移动，从输入字符串里面读取一些坐标
 *
 * 输入：
 *     A10;S20;W10;D30;X;A1A;B10A11;;A10;
 *
 * 输出：
 *     10,-10
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 0;
    char in[2000] = { '\0' };
    char temp[20] = { '\0' };
    while (scanf("%s", in) != EOF)
    {
        int i = 0, x = 0, y = 0, j = 0;
        while (in[i] != '\0')
        {     
            if (in[i] != ';')
            {
                temp[j++] = in[i++];
                count++;
            }
            else
            {
                j = 0;
                i++;
                if (count == 3)
                {
                    if ((temp[j] == 'A' || temp[j] == 'D' || temp[j] == 'W' || temp[j] == 'S') &&
                        (temp[j + 1] >= '0' && temp[j + 1] <= '9') && (temp[j + 2] >= '0' && temp[j + 2] <= '9'))
                    {
                        switch (temp[j])
                        {
                        case 'A':x -= (temp[j + 1]-'0') * 10 + (temp[j + 2]-'0'); break;
                        case 'D':x += (temp[j + 1] - '0') * 10 + (temp[j + 2] - '0'); break;
                        case 'W':y += (temp[j + 1] - '0') * 10 + (temp[j + 2] - '0'); break;
                        case 'S':y -= (temp[j + 1] - '0') * 10 + (temp[j + 2] - '0'); break;
                        default:break;
                        }
                        count = 0;
                    }
                    else
                    {
                        count = 0;
                        continue;
                    }
                             
 
                }
                else if (count == 2)
                {
                    if ((temp[j] == 'A' || temp[j] == 'D' || temp[j] == 'W' || temp[j] == 'S') &&
                         (temp[j + 1] >= '0' && temp[j + 1] <= '9'))
                    {
                        switch (temp[j])
                        {
                        case 'A':x -= (temp[j + 1] - '0') ; break;
                        case 'D':x += (temp[j + 1] - '0') ; break;
                        case 'W':y += (temp[j + 1] - '0') ; break;
                        case 'S':y -= (temp[j + 1] - '0') ; break;
                        default:break; 
                        }
                        count = 0;
                    }
                    else
                    {
                        count = 0;
                        continue;
                    }            
                }
                else
                {
                    count = 0;
                    continue;
                }       
            }
        }
        printf("%d,%d\n", x, y);
    }
         
    return 0;
}