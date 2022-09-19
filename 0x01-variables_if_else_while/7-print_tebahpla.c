#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int abc = 'a';

	while (abc <'z')
	{
		putchar(abc);
		++abc;
	}
	putchar('\n');
	return (0);
}

