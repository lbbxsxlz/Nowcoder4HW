/*
 * 输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。
 * 输入：
 *     9876673
 * 输出：
 *     37689
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

		data := make([]bool, 10)
		inputdata, err := strconv.Atoi(string(input))
		if err != nil {
			fmt.Println("strconv input fail")
			panic(err)
		}

		for inputdata != 0 {
			if (data[inputdata%10] == false) {
				fmt.Printf("%d", inputdata%10)
				data[inputdata%10] = true
			}
			inputdata /= 10
		}
		fmt.Printf("\n")
	}
}