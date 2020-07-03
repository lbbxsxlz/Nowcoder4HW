/*
 * 题目描述
 *     写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小数点后数值大于等于5,向上取整；小于5，则向下取整。
 *
 * 输入：
 *     5.5
 *
 * 输出：
 *     6
 */
#include <stdio.h>
 
int main()
{
    float input;
     
    scanf("%f", &input);
    int tmp = input * 10;
     
    printf("%d", tmp / 10 + (tmp%10>=5?1:0));
     
    return 0;
}

