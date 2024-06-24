package main

import (
	"fmt"
	"math"
)

func main() {
	var a, b, c, x1, x2 float64
	fmt.Scan(&a, &b, &c)
	x1 = (-b - (math.Sqrt(b*b - 4*a*c))) / 2 * a
	x2 = (-b + (math.Sqrt(b*b - 4*a*c))) / 2 * a
	fmt.Printf("%.2f, %.2f\n", x1, x2)
}
