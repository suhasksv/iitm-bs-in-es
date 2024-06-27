package main

import (
	"fmt"
)

func main() {
	var weight float64
	var zone int

	fmt.Println("Enter the weight of the package (kg): ")
	fmt.Scanf("%f", &weight)

	fmt.Println("Enter the destination zone number (1-7): ")
	fmt.Scanf("%d", &zone)

	if weight < 0 || zone < 1 || zone > 7 {
		fmt.Println("Invalid Input")
		return
	}

	costPerKg := calculateCostPerKg(zone)
	totalCost := weight * costPerKg

	fmt.Printf("%.2f\n", totalCost)
}

func calculateCostPerKg(zone int) float64 {
	switch zone {
	case 1:
		return 5.0
	case 2:
		return 7.0
	case 3:
		return 10.0
	case 4:
		return 12.0
	case 5:
		return 16.0
	case 6:
		return 17.0
	case 7:
		return 19.0
	default:
		return 0.0
	}
}
