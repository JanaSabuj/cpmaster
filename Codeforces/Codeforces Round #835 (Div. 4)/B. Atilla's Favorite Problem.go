package main

import (
	"fmt"
)

var t, n int
var mx int32 // rune === int32 == UTF-8
var str string

func solve() {
	fmt.Scan(&n)
	fmt.Scan(&str)
	mx = 'a'
	for _, ch := range str {
		if ch > mx {
			mx = ch
		}
	}
	fmt.Println(mx - 'a' + 1)
}

func main() {
	fmt.Scan(&t)
	for t > 0 {
		solve()
		t--
	}
}
