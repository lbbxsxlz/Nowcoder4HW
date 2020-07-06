/*
 * 编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)，换行表示结束符，不算在字符里。不在范围内的不作统计。多个相同的字符只计算一次
 * 输入：
 *     abaca
 * 输出：
 *     3
 */

package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	var num = 0
	reader := bufio.NewReader(os.Stdin)

	input, _, err := reader.ReadLine()
	if err != nil {
		panic(err)
	}

	inputStr := string(input)
	strLen:= len(inputStr)
	data:= make([]int, 128)

	for i := 0; i < strLen; i++ {
		if inputStr[i] <=127 && inputStr[i] > 0 {
			data[inputStr[i]] ++
		}
	}

	for i:= 0; i < 128; i++ {
		if data[i] > 0 {
			num ++
		}
	}

	fmt.Println(num)
}