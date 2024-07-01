package main

import (
	"fmt"
	"math"
)

func isPrime(num int) bool {
	if num <= 1 {
		return false
	}
	for i := 2; i <= int(math.Sqrt(float64(num))); i++ {
		if num%i == 0 {
			return false
		}
	}
	return true
}

func primeSum(p, q int) int {
	if p > q {
		return 0
	}

	var sum int
	for i := p; i <= q; i++ {
		if isPrime(i) {
			sum += i
		}
	}
	return sum
}

func main() {
	var input1, input2 int

	fmt.Scan(&input1)
	fmt.Scan(&input2)

	if input1 > input2 {
		fmt.Println("Error: Failure")
		return
	}

	println(primeSum(input1, input2))
}
