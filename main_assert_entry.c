/**
 * @file main_assert_entry.c
 * @brief Dedicated entry point for Fibonacci assertion example
 */

#include <stdio.h>
#include "myHeader.h"

int ASSERT_TRUE(int a, int b);

int main(void)
{
	printf("Assert: %s\n", ASSERT_TRUE(12, fibonacci(6)) ? "TRUE" : "FALSE");
	return 0;
}
