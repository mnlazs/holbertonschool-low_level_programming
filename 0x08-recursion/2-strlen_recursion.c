#include "main.h"
/**
 * _strlen_recursion - prototype that print lenght of a string
 *
 * @s: variable
 *
 * Return: _strlen_recursion
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
	return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
