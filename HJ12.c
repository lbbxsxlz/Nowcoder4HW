/*
 * 写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。（字符串长度不超过1000）
 *
 * 输入：
 *     abcd
 * 输出：
 *     dcba
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[1000];
    gets(str);
    int i;

    int len = strlen(str);

    for(i = len - 1; i >= 0 ; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

	return 0;
}