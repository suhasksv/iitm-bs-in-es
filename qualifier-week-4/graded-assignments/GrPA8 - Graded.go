package main

import "fmt"

func main() {
	var total, price float64
	var choice string

	for {
		// Prompt the user for the item price
		fmt.Scan(&price)

		// Add the price to the total cost
		total += price

		fmt.Print("Do you want to add another item? (y/n): ")
		fmt.Scan(&choice)

		if choice != "y" && choice != "Y" {
			break
		}
	}

	// Print the total cost
	fmt.Printf("%.2f\n", total)
}
