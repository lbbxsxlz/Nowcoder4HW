/*
 * 输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。
 * 输入：
 *     9876673
 * 输出：
 *     37689
 */
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int input, i;
    int tmp[10] = {0};
    scanf("%d", &input);

    while (input) {
        if (tmp[input%10] == 0) {
            printf("%d", input%10);
            tmp[input%10]++;
        }

        input /= 10;
    }
}
