/**
 * @file main.c
 * @brief Main program integrating all parts from Lecture 1
 *
 * This program integrates all parts from Lecture 1.
 * It includes examples of loops, input/output, getch, fgets, and Fibonacci calculations.
 *
 * Author: Miroslaw Staron
 * Date: 2021
 */

// Include section
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "myHeader.h"
#include "getch_example.h"


int main(int argc, char *argv[])
{
	// let's check if the program works at all
	printf("Number of arguments: %d\n", argc);

	// the name of the program
	printf("The name of the program: %s\n", argv[0]);
	

	if (argc > 1) {			// Handle command line arguments
		printf("The first argument: %s\n", argv[1]);
	} else {				// Handle piped input (from stdin)
		// first we define the buffer
		char buffer[MAXBUFFER];
		
		// then we read from stdin
		// to test it, use echo "Hello World" | ./first_programs.out
		if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
			printf("Piped: %s", buffer);
		}
	}

	// Execute the examples with the loops
	// generating random numbers
	// main_loops();

	// examples of reading and printing values
	// on the console
	// main_inout();

	// examples or reading using getchar()
	// main_getch();

	// examples with fgets()
	// main_fgets();

	// example of an assertion, i.e. the basics of a unit test
	// printf("Assert: %s\n", ASSERT_TRUE(12, fibonacci(6)) ? "TRUE" : "FALSE");

	return 0;
}