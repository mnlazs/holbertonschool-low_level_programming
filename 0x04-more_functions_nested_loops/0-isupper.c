#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 * @c: input
 * Return: Always 1 if c is uppercase, otherwise return 0
 */
int _isupper(int c)
{
	if ((c >= "A") && (c <= "Z"))
		return (1);
	else
		return (0);
}
