/*
 * 给定n个字符串，请对n个字符串按照字典序排列。
 * 
 * 输入：
 * 5
 * cap 
 * to
 * cat
 * card
 * two
 * 
 * 输出：
 * cap
 * card
 * cat
 * to
 * two
 */

package main
 
import (
    "fmt"
    "sort"
)
 
func main() {
    var num int
    var str string
	
	s := make([]string, 0)
	
    fmt.Scanf("%d", &num)
    for i := 0; i < num; i++ {
        fmt.Scanf("%s", &str);
        s = append(s, str)
    }
 
    sort.Strings(s)

    for i := 0; i < len(s); i++  {
        fmt.Println(s[i])
    }
}