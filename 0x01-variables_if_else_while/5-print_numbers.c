#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	char numb = "0";
	while (numb <= "9")
	{
		putchar (numb);
		numb++;
			}
	putchar ('\n');
	return (0);
}
