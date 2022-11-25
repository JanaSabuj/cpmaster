package a

import (
	"fmt"
	"sort"
)

var t int

func solve() {
	vecs := [3]int{}
	fmt.Scanln(&vecs[0], &vecs[1], &vecs[2])
	sort.Ints(vecs[:]) // sorting a slice
	fmt.Println(vecs[1])
}

func main() {
	fmt.Scanln(&t)
	for i := 0; i < t; i++ {
		solve()
	}
}
