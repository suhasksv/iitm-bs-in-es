package main

import (
	"fmt"
	"strconv"
)

func revPrint(n int) {
	if n > 0 {
		var num string

		fmt.Scan(&num)
		num1, err := strconv.Atoi(num)
		if err != nil {
			fmt.Println("Error: Invalid input. Please enter integers only.")
			return
		}
		revPrint(n - 1)
		fmt.Println(num1)
	}
}

func main() {
	fmt.Print("Enter the number of integers: ")
	var numValues int
	fmt.Scan(&numValues)

	if numValues <= 0 {
		fmt.Println("Error! Please enter a positive number of integers.")
		return
	}

	fmt.Println("Enter the integers:")
	revPrint(numValues)
}
