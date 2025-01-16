/**
 * @file input_and_output.c
 * @brief Demonstrates the use of scanf in Visual Studio
 *
 * This program demonstrates the use of scanf for reading input from the console.
 * It includes examples of reading strings and integers, and handling input errors.
 *
 * @author Miroslaw Staron
 * @date 2021
 */

#include <stdio.h>


int main_inout()
{
	// variable declarations

	int a = 0,	// integer to store the first number
		b,	// integer to store the second number
		c;	// integer to store the third number

	char name[20];	// string to store the name; Note! the max length can only be 20
					// please check what happens when you enter the name that is longer than 20 characters
	
	// Entering name
	printf("\n Enter your name : ");

	// scanf is the function where the magic happens
	// it reads the value from the console
	scanf("%20s", name);
	printf("\nYour name is %s: ", name);

	// the second block for reading the first number
	printf("\nEnter a number : ");

	// Note! the first parameter is different than in the previous block
	scanf("%d", &a);
	printf("\nThe number is %d ", a);

	// entering the socond number
	printf("\nEnter two numbers:  ");

	// Note! the first parameter of scanf is again different
	scanf("%d%d", &b, &c);

	printf("\nNumber 1 is %d \nNumber 2 is %d", b, c);

	return 0;
}
