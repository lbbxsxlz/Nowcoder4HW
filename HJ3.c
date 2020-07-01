/*
 * 输入N个1到1000之间的随机整数（N≤1000），对于其中重复的数字，只保留一个，把其余相同的数去掉，然后再把这些数从小到大排序，按照排好的顺序输出
 *
 * Input Param
 *		n               输入随机数的个数
 *		inputArray      n个随机整数组成的数组
 *
 * Return Value
 *		OutputArray    输出处理后的随机整数
 *
 */

#include <stdio.h>
#include <stdlib.h>
 
void sort(int* a, int n)
{
    int sort[1001] = {0};
    int i;
     
    for (i = 0; i < n; i++) {
        sort[a[i]] = 1;
    }
     
    for (i = 0; i < 1001; i++) {
        if (sort[i]) {
            printf("%d \n", i);
        }
    }
}
 
int main()
{
    int num, i;
    while (scanf("%d", &num) != EOF && num > 0) {
     
        int *tmp = (int*)malloc(num * sizeof(int));
        for (i = 0; i< num; i++) {
            scanf("%d", &tmp[i]);
        }
 
        sort(tmp, num);
        free(tmp);
    }   
}

