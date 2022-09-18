#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		if (abc == 'q')
		{
			abc++;
		}
		else if (abc == 'e')
		{
			abc++;
		}
		else
		{
			putchar(abc);
			abc++;
		}
	}
	putchar('\n');
	return (0);
}
