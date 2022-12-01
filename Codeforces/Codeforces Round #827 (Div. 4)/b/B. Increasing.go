package main

import (
	"bufio"
	"fmt"
	"os"
)

var in *bufio.Reader
var out *bufio.Writer
var t, n int

func solve() {
	fmt.Fscan(in, &n)
	vecs := make([]int, n)
	mp := make(map[int]int)

	for i := 0; i < n; i++ {
		fmt.Fscan(in, &vecs[i])
	}

	// check for duplicates in the array
	for i := 0; i < n; i++ {
		_, present := mp[vecs[i]]
		if present {
			fmt.Fprintln(out, "NO")
			return
		}
		mp[vecs[i]]++
	}

	fmt.Fprintln(out, "YES")
}

func main() {
	file, err := os.Open("/Users/sabuj.jana/projects/cpmaster/Codeforces/Codeforces Round #827 (Div. 4)/input.txt")
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
