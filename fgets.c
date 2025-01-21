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
#include <stdlib.h>
#include "myHeader.h"

// define max number of characters to read from the console
#define MAX 10

int main_fgets(void) {

    char text[MAX],		// string to read in
         in_text[MAX];	// the second string to read in (another text)

    // read the first text
    printf("\nEnter a text:");
    fgets(text, MAX, stdin);
    clearstdin();

    // read another text
    printf("\nEnter a new text:");
    fgets(in_text, MAX, stdin);

    // this line reads text, but can leave characters in the buffer
    // scanf("%5s", text);            // remaining characters still in buffer

    printf("\nThe first text is: %s", text);
    printf("\nThe second text is: %s", in_text);

    // Causes problem if you type in too many characters to in_text
    // use fgets( in_text, MAX, stdin);

	return 0;
}