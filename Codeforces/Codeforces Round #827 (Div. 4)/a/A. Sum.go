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
	// fmt.Fscan(in, &n)
	var a, b, c int
	fmt.Fscan(in, &a, &b, &c) // can read input just like cin of cpp
	// fmt.Println(a, b, c)
	if a == (b+c) || b == (c+a) || c == (a+b) {
		fmt.Fprintln(out, "YES")
	} else {
		fmt.Fprintln(out, "NO")
	}
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
