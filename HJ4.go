/*
* 连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组；
* 长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。
* 输入
*     abc
*     123456789
* 输出
*     abc00000
*     12345678
*     90000000
 */

package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	for {
		input, _, err := reader.ReadLine()
		if err != nil {
			fmt.Println("get input fail")
			panic(err)
		}

		inputStr := string(input)
		for len(inputStr) > 8 {
			fmt.Println(inputStr[:8])
			inputStr = inputStr[8:]
		}

		nlen := len(inputStr)
		for j:=0; j < 8 - nlen; j++ {
			inputStr += "0"
		}

		fmt.Println(inputStr)
	}
}