package main

import "fmt"

func main() {
	var x, term, cfrac float32
	fmt.Scan(&x)
	term = x + 1.0/x
	term = x + 1.0/term
	term = x + 1.0/term
	cfrac = x + 1.0/term
	println(cfrac)
}
