package main

import "fmt"

func main() {
	var num, reversed, remainder int

	fmt.Scan(&num)

	original := num

	for num != 0 {
		remainder = num % 10
		reversed = reversed*10 + remainder
		num /= 10
	}

	if original == reversed {
		fmt.Printf("%d is a palindrome number", original)
	} else {
		fmt.Printf("%d is not a palindome number", original)
	}
}
