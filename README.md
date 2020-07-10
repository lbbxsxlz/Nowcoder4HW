[TOC]
# Nowcoder4HW
——牛客网HW机试题练习代码

## HJ1 字符串最后一个单词长度
	题目描述
		计算字符串最后一个单词的长度，单词以空格隔开。
		
	输入描述:
		一行字符串，非空，长度小于5000。

	输出描述:
		整数N，最后一个单词的长度。

[C-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ1.c)    [Golang-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ1.go)

## HJ2 计算字符个数
	题目描述
		写出一个程序，接受一个由字母和数字组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。

	输入描述:
		第一行输入一个有字母和数字以及空格组成的字符串，第二行输入一个字符。

	输出描述:
		输出输入字符串中含有该字符的个数。
		
[C-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ2.c)    [Golang-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ2.go)

## HJ3 随机数去重
	题目描述
		输入N个1到1000之间的随机整数（N≤1000），对于其中重复的数字，只保留一个，把其余相同的数去掉，然后再把这些数从小到大排序，按照排好的顺序输出

	输入描述:
		输入多行，先输入随机整数的个数，再输入相应个数的整数
		
	输出描述:
		返回多行，处理后的结果
		
[C-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ3.c)    [Golang-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ3.go)

## HJ4 字符串分割
	题目描述
		•连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组；
		•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。
		
	输入描述:
		连续输入字符串(输入2次,每个字符串长度小于100)

	输出描述:
		输出到长度为8的新字符串数组
		
[C-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ4.c)    [Golang-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ4.go)

## HJ5 进制转换

	题目描述
		写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。（多组同时输入 ）

	输入描述:
		输入一个十六进制的数值字符串。

	输出描述:
		输出该数值的十进制字符串。
		
[C-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ5.c)    [Golang-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ5.go)

## HJ6 质数因子
	题目描述
		功能:输入一个正整数，按照从小到大的顺序输出它的所有质因子（重复的也要列举）（如180的质因子为2 2 3 3 5 ）
		最后一个数后面也要有空格

	输入描述:
		输入一个long型整数

	输出描述:
		按照从小到大的顺序输出它的所有质数的因子，以空格隔开。最后一个数后面也要有空格。
		
[C-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ6.c)    [Golang-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ6.go)

## HJ7 取近似值
	题目描述
		写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小数点后数值大于等于5,向上取整；小于5，则向下取整。

	输入描述:
		输入一个正浮点数值

	输出描述:
		输出该数值的近似整数值
		
[C-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ7.c)    [Golang-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ7.go)

## HJ8 合并表记录
	题目描述
		数据表记录包含表索引和数值（int范围的整数），请对表索引相同的记录进行合并，即将相同索引的数值进行求和运算，输出按照key值升序进行输出。

	输入描述:
		先输入键值对的个数
		然后输入成对的index和value值，以空格隔开

	输出描述:
		输出合并后的键值对（多行）
		
[C-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ8.c)    [Golang-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ8.go)

## HJ9 提取不重复的整数
	题目描述
		输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。

	输入描述:
		输入一个int型整数

	输出描述:
		按照从右向左的阅读顺序，返回一个不含重复数字的新的整数
		
[C-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ9.c)    [Golang-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ9.go)

## HJ10 字符个数统计
	题目描述
		编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)，换行表示结束符，不算在字符里。不在范围内的不作统计。多个相同的字符只计算一次

	输入描述:
		输入N个字符，字符在ACSII码范围内。

	输出描述:
		输出范围在(0~127)字符的个数。
		
[C-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ10.c)    [Golang-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ10.go)

## HJ11 数字颠倒
	题目描述
		输入一个整数，将这个整数以字符串的形式逆序输出，程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001

	输入描述:
		输入一个int整数

	输出描述:
		将这个整数以字符串的形式逆序输出

[C-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ11.c)    [Golang-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ11.go)

## HJ12 字符串反转 
	题目描述
		写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。（字符串长度不超过1000）

	输入描述:
		输入N个字符

	输出描述:
		输出该字符串
		
[C-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ12.c)    [Golang-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ12.go)

## HJ13 句子逆序
	题目描述
		将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”，所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符。
	输入描述:
		将一个英文语句以单词为单位逆序排放。

	输出描述:
		得到逆序的句子
		
[C-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ13.c)    [Golang-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ13.go)	

## HJ14 字符串字典排序
	题目描述
		给定n个字符串，请对n个字符串按照字典序排列。
	输入描述:
		输入第一行为一个正整数n(1≤n≤1000),下面n行为n个字符串(字符串长度≤100),字符串中只含有大小写字母。
	输出描述:
		数据输出n行，输出结果为按照字典序排列的字符串。
[C-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ14.c)    [Golang-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ14.go)

## HJ15 int型正整数在内存中存储时1的个数
	题目描述
		输入一个int型的正整数，计算出该int型数据在内存中存储时1的个数。

	输入描述:
 		输入一个整数（int类型）

	输出描述:
 		这个数转换成2进制后，输出1的个数

[C-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ15.c)    [Golang-code](https://github.com/lbbxsxlz/Nowcoder4HW/blob/master/HJ15.go)