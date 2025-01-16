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


int main(int argc, char *argv[])
{
	// let's check if the program works at all
	printf("%d\n", argc);
	
	// the first argument
	// printf("The first argument %s\n", argv[1]);

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