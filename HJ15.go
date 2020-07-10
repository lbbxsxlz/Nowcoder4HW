/*
 * 输入一个int型的正整数，计算出该int型数据在内存中存储时1的个数。
 *
 * 输入：
 *     5
 * 输出：
 *     2
 */

package main
import "fmt"

func main() {
	var num int
	fmt.Scanf("%d", &num)

	count := 0
	for num > 0 {
		if num & 1 == 1 {
			count ++
		}

		num = num >> 1
	}

	fmt.Println(count)
}
