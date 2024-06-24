package main

import "fmt"

func main() {
	var gender int
	var weight, height, aF, bmr, age float64
	fmt.Scan(&age)
	fmt.Scan(&gender)
	fmt.Scan(&weight)
	fmt.Scan(&height)
	fmt.Scan(&aF)

	if gender == 1 {
		bmr = 88.362 + (13.397 * weight) + (4.799 * height) - (5.677 * age)
	} else if gender == 2 {
		bmr = 447.593 + (9.247 * weight) + (3.098 * height) - (4.330 * age)
	} else {
		println("Invalid Input")
	}

	println(bmr * aF)
}
