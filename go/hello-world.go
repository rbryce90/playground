package main 

import "fmt"

func main (){ 

	var fullname string 
	fmt.Println("Welcome to my program!")
	fmt.Println("---------------------------------------------")
	fmt.Println("What is you name?")	
	fmt.Scanln(&fullname)
	fmt.Println("Hello " + fullname + " let's play a game!")
	fmt.Println("Ready!")
	fmt.Scanln()
	fmt.Println("Actually something came up!")
	fmt.Println(":/ ")
	fmt.Println("Byeeeeeeee")
}