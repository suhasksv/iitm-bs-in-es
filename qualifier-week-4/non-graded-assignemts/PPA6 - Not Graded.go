package main

import (
	"fmt"
	"math"
)

func compoundInterest(P, r float64, n, t int) float64 {
	A := P * math.Pow(1+r/float64(n), float64(n*t))
	return A
}

func main() {
	var P, r float64
	var n, t int
	fmt.Scan(&P)
	fmt.Scan(&r)

	r /= 100

	fmt.Scan(&t)
	fmt.Scan(&n)

	for i := 1; i <= t; i++ {
		A := compoundInterest(P, r, n, t)
		println(A)
	}
}
