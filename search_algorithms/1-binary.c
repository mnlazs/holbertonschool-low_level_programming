#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array of
  * integers using the Linear search algorithm
  *
  * @array: A pointer to the first element of the array to search in
  * @size: The number of elements in array
  * @value: The value to search for
  *
  * Return: The first index where value is located
  */
#include <stdio.h>

int binary_search(int *array, size_t size, int value) {
    int left = 0;
    int right = size - 1;
 
    while (left <= right) {
        int mid = left + (right - left) / 2;


    if (array == NULL) {
        return -1;
    }

  

        printf("Searching in array: ");
        for (int i = left; i <= right; ++i) {
            printf("%d", array[i]);
            if (i < right) {
                printf(", ");
            }
        }
        printf("\n");

        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}