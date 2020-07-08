/*
 * 将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”，所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符。
 *
 * 输入：
 *     i am a boy
 * 输出：
 *     boy a am i
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
		for i:= lstLen - 1; i >=0; i-- {
			fmt.Printf("%s ", splst[i])
		}

		fmt.Printf("\n")
	}
}