package main

import (
	"fmt"
	"math"
)

func main() {
	var dia, costPSI, cPT, nT float64

	fmt.Scan(&dia)
	fmt.Scan(&costPSI)
	fmt.Scan(&nT)
	fmt.Scan(&cPT)
	println(((math.Pi*math.Pow(dia, 2))/4)*costPSI + (nT * cPT))
}
