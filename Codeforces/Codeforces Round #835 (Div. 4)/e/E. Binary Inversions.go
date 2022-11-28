package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

var in *bufio.Reader
var out *bufio.Writer
var t, n int

func inversion(vec []int) int {
	inv := 0
	cnt0 := 0

	for i := n - 1; i >= 0; i-- {
		if vec[i] == 0 {
			cnt0++
		} else {
			inv += cnt0
		}
	}

	return inv
}

func solve() {
	fmt.Fscan(in, &n)
	vec := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Fscan(in, &vec[i])
	}
	cp1 := make([]int, n)
	cp2 := make([]int, n)
	copy(cp1, vec)
	copy(cp2, vec)

	// 5 4 3 2 1
	// inversion when i < j and arr[i] > arr[j]
	// 1           0
	// 0           1
	// max no of inversions = arr is desc sorted
	// (n-1) + (n-2) + (n-3) + ... + 1 = n(n-1)/2

	ans0 := inversion(vec)

	for i := 0; i < n; i++ {
		if cp1[i] == 0 {
			cp1[i] = 1
			break
		}
	}

	ans1 := inversion(cp1)

	for i := n - 1; i >= 0; i-- {
		if cp2[i] == 1 {
			cp2[i] = 0
			break
		}
	}

	ans2 := inversion(cp2)

	fmt.Fprintln(out, int(math.Max(float64(ans2), math.Max(float64(ans0), float64(ans1)))))

}

func main() {
	file, err := os.Open("/Users/sabuj.jana/projects/cpmaster/Codeforces/Codeforces Round #835 (Div. 4)/input.txt")
	if err != nil {
		fmt.Println(err)
	}
	defer file.Close()

	in = bufio.NewReader(file)
	// in = bufio.NewReader(os.Stdin)
	out = bufio.NewWriter(os.Stdout)
	defer out.Flush()

	fmt.Fscan(in, &t)
	for t > 0 {
		solve()
		t--
	}
}
