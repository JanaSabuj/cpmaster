package main

import "fmt"

func get12max(vecs []int) (mx1 int, mx2 int) {
	mx1, mx2 = -1, -1
	n := len(vecs)

	// x <- mx1 <- mx2 rest
	for i := 0; i < n; i++ {
		if vecs[i] > mx1 {
			mx2 = mx1
			mx1 = vecs[i]
		} else if vecs[i] > mx2 && vecs[i] != mx1 {
			// hack to prevent duplicate max, smax
			mx2 = vecs[i]
		}

		fmt.Println("max1 - ", mx1, "max2 - ", mx2)
	}

	return mx1, mx2
}

func main() {
	fmt.Println(get12max([]int{1, 3, 3, 2, 1}))
}
