package main

import "fmt"

func areCoPrimes(n1, n2 int) bool {
	if n1 <= 2 || n2 <= 2 {
		return n1 != n2
	}

	for n2 != 0 {
		remainder := n1 % n2
		n1 = n2
		n2 = remainder
	}
	return n1 == 1
}

func main() {
	var n1, n2 int

	fmt.Scan(&n1, &n2)

	if areCoPrimes(n1, n2) {
		println("Coprime")
	} else {
		println("Not Coprime")
	}
}
