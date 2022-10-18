#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - protype funtion
 * Return: a pointer
 * @b: size
 */
void *malloc_checked(unsigned int b)
{
	void *love

	love = malloc(b);

	if (love == NULL)
		exit(98);

	return (love);
}
