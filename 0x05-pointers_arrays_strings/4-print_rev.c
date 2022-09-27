#include "main.h"
#include <string.h>
/**
 * print_rev - reverses a string
 * @s: string to reverse
 *
 * Return: 0 void
 */
void print_rev(char *s)
{
	int i = 0, j = 0;
	char str[500];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
