/**
 * @file main_arguments.c
 * @brief Dedicated entry point for command line argument and stdin examples
 */

#include <stdio.h>
#include "myHeader.h"

int main(int argc, char *argv[])
{
	printf("Number of arguments: %d\n", argc);
	printf("The name of the program: %s\n", argv[0]);

	if (argc > 2) {
		printf("The first argument: %s\n", argv[1]);
		printf("The second argument: %s\n", argv[2]);
	} else {
		char buffer[MAXBUFFER];
		if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
			printf("Piped: %s", buffer);
		}
	}

	return 0;
}
