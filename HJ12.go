/*
 * 写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。（字符串长度不超过1000）
 *
 * 输入：
 *     abcd
 * 输出：
 *     dcba
 */

package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	input, _, err := reader.ReadLine()
	if err != nil {
		panic(err)
	}

	inputStr := string(input)
	strLen:= len(inputStr)

	for i := strLen - 1; i >= 0; i-- {
		fmt.Printf("%c", inputStr[i])
	}

	fmt.Printf("\n")
}
