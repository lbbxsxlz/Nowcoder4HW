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
package main

import "fmt"

func main() {
	var input float32
	fmt.Scanf("%f", &input)
	fmt.Println(int(input + 0.5))
}
