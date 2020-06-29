/*
* 写出一个程序，接受一个由字母和数字组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。
*
* 测试用例：
*
* 输入：
*	ABCDEF
*   A
* 输出：
*	1
*
 */
package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	input, err := reader.ReadString('\n')
	if err != nil {
		fmt.Println("get input fail")
		panic(err)
	}

	str := strings.ToLower(input)
	sig, err := reader.ReadByte()
	if err != nil {
		fmt.Println("get char fail")
		panic(err)
	}

	fmt.Println(strings.Count(str, strings.ToLower(string(sig))))
}

