/*
 * 字符串最后一个单词长度
 *
 * 测试用例：
 *
 * 输入：
 *	hello world
 * 输出：
 *	5
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

	input, _, err := reader.ReadLine()
	if err != nil {
		fmt.Println("get input fail")
		panic(err)
	}
	inputStr := string(input)

	/* strings.Fields return list */
	splst := strings.Fields(inputStr)
	lstLen := len(splst)
	if len(splst) > 0 {
		fmt.Println(len(splst[lstLen-1]))
	} else {
		fmt.Println(0)
	}
}
