#include "main.h"
#include <stdio.h>

/**
 * swap_int -  funtion prototype
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 */
void swap_int (int *a, int *b)

{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
