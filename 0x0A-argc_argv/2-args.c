#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @argv: The character to print
 * @argc: The character to print
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++);
	{
		printf("argumento %d, %s \n", i, argv[i]);
	
	}
	return 0;
}
