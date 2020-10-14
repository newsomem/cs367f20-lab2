package main

import "fmt"

func main() {
	const i = 10

	for a := i; a > 0; a-- {
		fmt.Printf("%d\n",a)
	}
	fmt.Printf("BLASTOFF!\n")
}
