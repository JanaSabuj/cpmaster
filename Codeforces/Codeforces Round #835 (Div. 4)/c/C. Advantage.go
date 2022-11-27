package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

var in = bufio.NewReader(os.Stdin)
var t, n int

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
	sort.Ints(vecs)

	mx1, mx2 := vecs[n-1], vecs[n-2]
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
