/*
 * 输入一个int型的正整数，计算出该int型数据在内存中存储时1的个数。
 * 
 * 输入：
 *     5
 * 输出：
 *     2
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);
    int count = 0;
    
    while (num > 0) {
        num = num & (num - 1);
        count++;
    }
    
    printf("%d\n", count);
}