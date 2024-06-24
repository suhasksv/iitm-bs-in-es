package main

import "fmt"

func main() {
	var num int
	fmt.Scan(&num)
	println((num / 1000) + ((num / 100) % 10) + ((num / 10) % 10) + (num % 10))
}
