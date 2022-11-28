package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
)

var in *bufio.Reader
var out *bufio.Writer
var t, n int
var ans bool

func solve1() {
	fmt.Fscan(in, &n)
	vec := make([]int, n)
	nondup := make([]int, 0)

	for i := 0; i < n; i++ {
		fmt.Fscan(in, &vec[i])
		if i == 0 {
			nondup = append(nondup, vec[i])
		} else if vec[i] != vec[i-1] {
			nondup = append(nondup, vec[i])
		}
	}
	// fmt.Println(nondup)

	n = len(nondup)
	x := 0
	for i := 1; i < n; i++ {
		if nondup[i] < nondup[i-1] {
			x = i
		} else {
			break
		}
	}
	// fmt.Fprint(out, x)
	flag := true
	for i := x + 1; i < n; i++ {
		if nondup[i] < nondup[i-1] {
			flag = false
			break
		}
	}

	if flag {
		fmt.Fprintln(out, "YES")
	} else {
		fmt.Fprintln(out, "NO")
	}
}

// count no of valleys
// - - - - - - - -

func solve2() {
	// if i == 0 and vec[i] < vec[i+1]
	// if i == n-1 and vec[i-1] > vec[i]
	// if(vec[i-1] > vec[i]  and vec[i] < vec[i+1])
	fmt.Fscan(in, &n)
	vec := make([]int, n)
	nondup := make([]int, 0)

	for i := 0; i < n; i++ {
		fmt.Fscan(in, &vec[i])
		if i == 0 {
			nondup = append(nondup, vec[i])
		} else if vec[i] != vec[i-1] {
			nondup = append(nondup, vec[i])
		}
	}

	num_valleys := 0
	for i := 0; i < n; i++ {
		if (i == 0 || nondup[i-1] > nondup[i]) && (i == n-1 || nondup[i] < nondup[i+1]) {
			num_valleys++
		}
	}

	if num_valleys == 1 {
		fmt.Fprintln(out, "YES")
	} else {
		fmt.Println(out, "NO")
	}
}

func main() {
	file, err := os.Open("/Users/sabuj.jana/projects/cpmaster/Codeforces/Codeforces Round #835 (Div. 4)/input.txt")
	if err != nil {
		log.Fatal(err)
	}
	defer file.Close()

	in = bufio.NewReader(file)
	// in = bufio.NewReader(os.Stdin)
	out = bufio.NewWriter(os.Stdout)
	defer out.Flush()

	fmt.Fscan(in, &t)
	for t > 0 {
		solve2()
		t--
	}
}
