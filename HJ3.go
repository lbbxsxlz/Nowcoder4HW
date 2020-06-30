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

package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	for {
		input, _, err := reader.ReadLine()
		if err != nil {
			fmt.Println("get input fail")
			panic(err)
		}

		count, err := strconv.Atoi(string(input))
		if err != nil {
			fmt.Println("strconv input fail")
			panic(err)
		}

		data := make([]bool, 1001)
		for i:=0;i < count; i++ {
			tmp, _, err := reader.ReadLine()
			if err != nil {
				fmt.Println("get input fail")
				panic(err)
			}
			index, err := strconv.Atoi(string(tmp))
			if err != nil {
				fmt.Println("strconv input fail")
				panic(err)
			}
			data[index] = true
		}
		for j, v := range data {
			if v == true {
				fmt.Println(j)
			}
		}
	}
}