#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * *_strdup - prototype
 * @str: variable
 * Return: NULL or pointer of array
 *
 */
char *_strdup(char *str)
{
	char *r;
	int i, j;
	int coun = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		coun = coun + 1;
	}

	r = malloc(sizeof(char) * coun + 1);

	if (r == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0' ; j++)
	{
		r[j] = str[j];
	}

	r[j] = '\0';

	return (r);
}
