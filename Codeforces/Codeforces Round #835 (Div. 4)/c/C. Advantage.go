package main

import (
	"bufio"
	"fmt"
	"os"
)

var in = bufio.NewReader(os.Stdin)
var t, n int

func get12max(vecs []int) (mx1 int, mx2 int) {
	mx1, mx2 = -1, -1
	x := len(vecs)

	// x <- mx1 <- mx2 rest
	for i := 0; i < x; i++ {
		if vecs[i] > mx1 {
			mx2 = mx1
			mx1 = vecs[i]
		} else if vecs[i] > mx2 {
			mx2 = vecs[i]
		}
	}

	return mx1, mx2
}

func solve() {
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()

	fmt.Fscan(in, &n)
	vecs := make([]int, n)
	cpy := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Fscan(in, &vecs[i])
	}
	copy(cpy, vecs)
	// sort.Ints(vecs)

	// mx1, mx2 := vecs[n-1], vecs[n-2]
	mx1, mx2 := get12max(vecs)
	ans := make([]int, n)
	for i := 0; i < n; i++ {
		if cpy[i] == mx1 {
			ans[i] = cpy[i] - mx2
		} else {
			ans[i] = cpy[i] - mx1
		}
	}

	for _, val := range ans {
		fmt.Fprintf(out, "%d ", val)
	}
	fmt.Fprintln(out)
}

func main() {
	fmt.Fscan(in, &t)
	for t > 0 {
		solve()
		t--
	}
}
