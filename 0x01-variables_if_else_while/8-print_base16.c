#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	unsigned char a=0x64;
	int b=0xFAFA;
	
	putchar("value of a: %X [%x]\n",a,a);
	putchar("value of b: %X [%x]\n",b,b);
	
	return 0;
}

