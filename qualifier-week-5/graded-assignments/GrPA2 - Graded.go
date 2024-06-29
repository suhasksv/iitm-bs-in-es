package main

import "fmt"

func main() {
	var a, b int

	_, err := fmt.Scan(&a)
	if err != nil {
		panic(err)
	}

	_, err = fmt.Scan(&b)
	if err != nil {
		panic(err)
	}
	println(GCD(a, b))
}

func GCD(a, b int) int {
	for b != 0 {
		temp := b
		b = a % b
		a = temp
	}
	return a
}
