package main

import "fmt"

func main() {
	var weight, rate float64

	fmt.Scan(&weight)
	fmt.Scan(&rate)

	println(weight * rate)
}
