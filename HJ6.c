/*
 * 题目描述
 *    功能:输入一个正整数，按照从小到大的顺序输出它的所有质因子（重复的也要列举）（如180的质因子为2 2 3 3 5 ）
 *    最后一个数后面也要有空格
 *
 *  输入：
 *      180
 *  输出：
 *      2 2 3 3 5
 */

#include <stdio.h>
long num;
int main()
{
    while(scanf("%d", &num)!=EOF)
    {
        int i = 2;
        for (; i <=num; i++)
        {
            while(num%i == 0)
            {
                printf("%d ", i);
                num = num / i;
            }
        }
    }
    return 0;
}

