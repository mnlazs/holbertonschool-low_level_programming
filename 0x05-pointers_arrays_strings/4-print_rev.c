#include "main.h"
/**
 * print_rev - reverses a string
 * @s: string to reverse
 *
 * Return: 0 void
 */

void print_rev(char *s)
{
	int len = 0, index = 0;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		putchar(s[index]);

	putchar('\n');
}
