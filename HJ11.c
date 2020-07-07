/*
 * 输入一个整数，将这个整数以字符串的形式逆序输出，程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001
 *
 * 输入：
 *     1516000
 * 输出：
 *     0006151
 */

#include <stdio.h>
#include <stdio.h>

int main() {
    long data;
    scanf("%ld", &data);

    while (data != 0) {
        printf("%ld", data % 10);
        data /= 10;
    }
    printf("\n");

	return 0;
}