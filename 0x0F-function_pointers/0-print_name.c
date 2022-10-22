#include "main.h"
/**
 * print_name - function with two arguments
 * @name: char type pointer to string
 * @f: pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
