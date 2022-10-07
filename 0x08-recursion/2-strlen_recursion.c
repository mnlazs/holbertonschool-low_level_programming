#include "main.h"
/**
 * _strlen_recursion - prototype that print lenght of a string
 *
 * @s: variable
 *
 * return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
	return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
