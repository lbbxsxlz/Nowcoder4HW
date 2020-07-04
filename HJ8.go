/*
 * 数据表记录包含表索引和数值（int范围的整数），请对表索引相同的记录进行合并，即将相同索引的数值进行求和运算，输出按照key值升序进行输出。
 * 输入
 *    4
 *    0 1
 *    0 2
 *    1 2
 *    3 4
 * 输出
 *    0 3
 *    1 2
 *    3 4
 */

package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main(){
	reader :=bufio.NewReader(os.Stdin)
	for {
		input,_,err:=reader.ReadLine()
		if err != nil {
			fmt.Println("get input fail")
			panic(err)
		}
		tol, err:= strconv.Atoi(string(input))
		if err != nil {
			fmt.Println("strconv input fail")
			panic(err)
		}
		maps := [1024]int{}
		for i:=0;i<tol;i++{
			inputs,_,err:=reader.ReadLine()
			if err != nil {
				fmt.Println("get input fail")
				panic(err)
			}
			strs:= string(inputs)
			splitStr :=strings.Split(strs," ")
			index,_:= strconv.Atoi(splitStr[0])
			num,_ := strconv.Atoi(splitStr[1])
			maps[index] += num
		}
		for k,v:=range maps{
			if v !=0 {
				fmt.Printf("%d %d\n",k,v)
			}
		}
	}
}
