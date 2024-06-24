package main

import "fmt"

func main() {
	var timeInSeconds, hours, minutes, seconds int
	fmt.Scan(&timeInSeconds)

	hours = timeInSeconds / 3600
	minutes = (timeInSeconds % 3600) / 60
	seconds = timeInSeconds % 60
	fmt.Printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds)
}
