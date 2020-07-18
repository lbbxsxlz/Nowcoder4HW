/*
 * 开发一个坐标计算工具， A表示向左移动，D表示向右移动，W表示向上移动，S表示向下移动。从（0,0）点开始移动，从输入字符串里面读取一些坐标
 *
 * 输入：
 *     A10;S20;W10;D30;X;A1A;B10A11;;A10;
 *
 * 输出：
 *     10,-10
 */
package main

import (
"bufio"
"fmt"
"os"
"strconv"
"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	for {
		data, _ ,err := reader.ReadLine()
		if err != nil{
			break
		}

		sList := strings.Split(string(data),";")
		var x = 0
		var y = 0

		for _, list:= range sList {
			/* 坐标移动命令长度判断 */
			if  len(list) == 2 || len(list) == 3 {
				if list[0] == 'A'{
					step, err := strconv.Atoi(list[1:])
					if err != nil {
						continue
					}
					x -= step
				}
				if list[0] == 'D'{
					step, err := strconv.Atoi(list[1:])
					if err != nil{
						continue
					}
					x += step
				}
				if list[0] == 'W'{
					step, err := strconv.Atoi(list[1:])
					if err != nil{
						continue
					}
					y += step
				}
				if list[0] == 'S'{
					step, err := strconv.Atoi(list[1:])
					if err != nil{
						continue
					}
					y -= step
				}
			}
		}
		fmt.Printf("%d,%d\n",x,y)
	}
}
