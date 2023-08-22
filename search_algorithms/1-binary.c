#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array of
  * integers using the Binary search algorithm
  *
  * @array: A pointer to the first element of the array to search in
  * @size: The number of elements in array
  * @value: The value to search for
  *
  * Return: The first index where value is located
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, zero = 0, med = 0, final = size - 1;

	if (array == NULL)
		return (-1);

	while (zero <= final)
	{
		med = (final + zero) / 2;
		i = zero;

		printf("Searching in array: ");

		for (; i <= final; ++i)
		{
			if (i != zero)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
		}

		printf("\n");

		if (array[med] < value)
			zero = final + 1;
		else if (array[med] > value)
			final = med - 1;
		else
			return (med);
	}

	return (-1);
}
