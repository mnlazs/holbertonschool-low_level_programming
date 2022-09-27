#include "main.h"
/**
 * print_line - function.
 * @n: is the integer of my function
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
