package main

import "fmt"

func meetingHappening(ids []int) bool {
	for i := range ids {
		nextIndex := (i + 1) % len(ids)
		if (ids[i]+ids[nextIndex])%2 != 0 {
			return false
		}
	}
	return true
}

func main() {
	var employeeIDs [5]int
	_, err := fmt.Scanf("%d %d %d %d %d", &employeeIDs[0], &employeeIDs[1], &employeeIDs[2], &employeeIDs[3], &employeeIDs[4])

	if err != nil {
		println("Error: Failure")
		return
	}

	if meetingHappening(employeeIDs[:]) {
		println("YES")
	} else {
		println("NO")
	}
}
