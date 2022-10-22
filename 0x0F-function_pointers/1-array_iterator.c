#include <stdio.h>
/**
 * array - itirator - prototype funtion
 * @array: pointer
 * @action: pointer
 * @size: size of array
 * return: 0 success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
