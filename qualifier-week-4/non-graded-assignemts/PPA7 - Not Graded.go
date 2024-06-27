package main

import "fmt"

func main() {
	var purchaseAmount float64

	fmt.Println("Enter the total purchase amount: ")
	_, err := fmt.Scanf("%f", &purchaseAmount)
	if err != nil {
		return
	}

	var discountRate float64

	switch {
	case purchaseAmount < 200:
		discountRate = 0.0
	case purchaseAmount <= 500:
		discountRate = 0.1
	default:
		discountRate = 0.2
	}

	finalAmount := purchaseAmount * (1 - discountRate)

	fmt.Printf("Final amount to pay: %.2f\n", finalAmount)
}
