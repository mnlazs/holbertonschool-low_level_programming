#include "main.h"
#include <stdlib.h>
/**
 * str_concat - prototype
 * Return: result
 * @s1: variable
 * @s2: variable
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int s1_len = 0, s2_len = 0;

	char *result;

	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}
	result = (char *)malloc(s1_len + s2_len + 1);

	for (i = 0; i < s1_len; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < s2_len; j++)
	{
		result[i] = s2[j];
	}
		result[s1_len + s2_len] = '\0';

	return (result);
}
