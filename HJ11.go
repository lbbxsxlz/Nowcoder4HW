/*
 * 输入一个整数，将这个整数以字符串的形式逆序输出，程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001
 *
 * 输入：
 *     1516000
 * 输出：
 *     0006151
 */

package main

import "fmt"

func main() {
	var input int64
	fmt.Scanf("%d", &input)

	for input != 0 {
		fmt.Printf("%d", input%10)
		input /= 10
	}

	fmt.Printf("\n")
}