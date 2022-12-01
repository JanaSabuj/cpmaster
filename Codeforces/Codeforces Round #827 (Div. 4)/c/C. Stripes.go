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
	arr := make([]string, 8) // declare a 2D slice
	for i := 0; i < 8; i++ {
		fmt.Fscan(in, &arr[i])
	}
	// fmt.Fprint(out, arr)

	// horizontal R - check full string
	for i := 0; i < 8; i++ {
		if arr[i] == "RRRRRRRR" {
			fmt.Fprintln(out, "R")
			return
		}
	}

	// no need to check even, bcoz if it is not RED, it has to be BLUE
	fmt.Fprintln(out, "B")
	// vertical B
	// for j := 0; j < 8; j++ {
	// 	flag := true
	// 	for i := 0; i < 8; i++ {
	// 		if arr[i][j] != 'B' {
	// 			flag = false
	// 			break
	// 		}
	// 	}

	// 	if flag {
	// 		fmt.Fprintln(out, "B")
	// 		return
	// 	}
	// }
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
