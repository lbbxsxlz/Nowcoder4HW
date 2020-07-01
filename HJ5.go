/*
 * 题目描述
 * 	写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。（多组同时输入 ）
 *
 * 输入
 *   0xA
 * 输出
 *   10
 */

package main
import(
	"fmt"
)
func main(){
	var num int
	for {
		_, err := fmt.Scanf("0x%x", &num)
		if err != nil {
			return
		}
		fmt.Println(num)
	}

}