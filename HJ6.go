/*
 * 题目描述
 *    功能:输入一个正整数，按照从小到大的顺序输出它的所有质因子（重复的也要列举）（如180的质因子为2 2 3 3 5 ）
 *    最后一个数后面也要有空格
 *
 *  输入：
 *      180
 *  输出：
 *      2 2 3 3 5
 */

package main
import 	"fmt"

func main() {
	var num uint64
	var i uint64
	for {
		_, err := fmt.Scanf("%d", &num)
		if err != nil {
			return
		}

		for i = 2; i <= num; i++ {
			for num % i == 0 {
				fmt.Printf("%d ", i)
				num /= i
			}
		}
	}
}
