/*
 * 设计一个满足要求的购物单
 * 输入：
 *     1000 5
 *     800 2 0
 *     400 5 1
 *     300 5 1
 *     400 3 0
 *     500 2 0
 * 输出：
 *     2200
 */

package main

import (
	"fmt"
)

func Max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

type pack struct {
	v, p int
}

func main() {
	var N, m, v, p, q int
	fmt.Scanln(&N, &m)
	N /= 10
	all := make([][]pack, m+1)
	for i := 1; i < m+1; i++ {
		fmt.Scanln(&v, &p, &q)
		v /= 10
		p *= v
		if q == 0 {
			if all[i] == nil {
				all[i] = make([]pack, 1)
			}
			all[i][0] = pack{v, p}
		} else {
			if all[q] == nil {
				all[q] = make([]pack, 2)
				all[q][1] = pack{v, p}
			}
			all[q] = append(all[q], pack{v, p})
		}
	}
	dp := make([]int, N+1)
	for i := 1; i < m+1; i++ {
		if all[i] == nil {
			continue
		}
		for j := N; j >= all[i][0].v; j-- {
			v := all[i][0].v
			p := all[i][0].p
			dp[j] = Max(dp[j], dp[j-v]+p)

			if len(all[i]) > 1 {              //先处理all[i]中的0+1，再处理0+1+2，最后处理0+2
				v += all[i][1].v
				p += all[i][1].p
				if j >= v {
					dp[j] = Max(dp[j], dp[j-v]+p)
				}
				if len(all[i]) > 2 {
					v += all[i][2].v
					p += all[i][2].p
					if j >= v {
						dp[j] = Max(dp[j], dp[j-v]+p)
					}

					v -= all[i][1].v
					p -= all[i][1].p
					if j >= v {
						dp[j] = Max(dp[j], dp[j-v]+p)
					}
				}
			}
		}
	}
	fmt.Println(10 * dp[N])
}