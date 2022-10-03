#include "main.h"
#include <stddef.h>
/**
 * _strchr - prototype funtion that locate character in string
 * @s:the string to check
 * @c:the character we are looking for
 * Return:
 * @s. Return NULL if the character isnt found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
