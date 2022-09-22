#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main()
{
    char c;

    c = 'C';
    printf("Return value when uppercase character %c is passed to isupper(): %d", c, isupper(c));

    c = '+';
    printf("\nReturn value when another character %c is passed to is isupper(): %d", c, isupper(c));

   return 0;
}
