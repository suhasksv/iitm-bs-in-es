package main

import "fmt"

func main() {
	var numDays int
	fmt.Scan(&numDays)

	if numDays <= 0 {
		return
	}

	totalCookies := 0
	var dailySales int

	for i := 0; i < numDays; i++ {
		fmt.Scan(&dailySales)
		totalCookies += dailySales
	}
	println(totalCookies)
}
