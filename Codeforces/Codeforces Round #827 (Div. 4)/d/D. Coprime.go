package main

import (
	"bufio"
	"fmt"
	"os"
)

var in *bufio.Reader
var out *bufio.Writer
var t, n int

// a > b
func gcd(a, b int) int {
	if b == 0 {
		return a
	} else {
		return gcd(b, a%b)
	}
}

func solve() {
	fmt.Fscan(in, &n)
	vecs := make([]int, n)
	rightMostPos := make(map[int]int)

	for i := 0; i < n; i++ {
		fmt.Fscan(in, &vecs[i])
		if i+1 > rightMostPos[vecs[i]] {
			rightMostPos[vecs[i]] = i + 1
		}
	}

	// check for all coprime pairs
	const N int = 1000
	mx := -1
	for i := 1; i <= N; i++ {
		for j := 1; j <= N; j++ {
			if gcd(i, j) == 1 {
				if rightMostPos[i] != 0 && rightMostPos[j] != 0 {
					if rightMostPos[i]+rightMostPos[j] > mx {
						mx = rightMostPos[i] + rightMostPos[j]
					}
				}
			}
		}
	}

	if mx == -1 {
		fmt.Fprintln(out, "-1")
	} else {
		fmt.Fprintln(out, mx)
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
