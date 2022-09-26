#include "main.h"
#include <string.h>

/**
 * strlen - funtion prototype
 *
 * @str: to get the length of the string
 *
 * Return: the lenght of @str.
 */
size_t strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
