/*
 * 数据表记录包含表索引和数值（int范围的整数），请对表索引相同的记录进行合并，即将相同索引的数值进行求和运算，输出按照key值升序进行输出。
 * 输入
 *    4
 *    0 1
 *    0 2
 *    1 2
 *    3 4
 * 输出
 *    0 3
 *    1 2
 *    3 4
 */

#include <stdlib.h>
#include <stdio.h>
 
int data[1024];
int main()
{
    int num, i, j, a, b;
    while (scanf("%d", &num) != EOF)
    {
        for (i = 0; i < num; i++)
        {
            scanf("%d %d", &a, &b);
            data[a]+=b;
        }
         
        for (j = 0; j < num; j++)
        {
            if (data[j] != 0)
            {
                printf("%d %d \n", j, data[j]);
            }
        }
    }
}

