#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    for (size_t i = 0; i < size; i++) {
        printf("Comparing %d with %d\n", array[i], value);
        if (array[i] == value) {
            return i; // Return the index where the value is found
        }
    }

    return -1; // Value not found
}

int main() {
    int arr[] = { 3, 9, 2, 7, 1, 5 };
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int value = 7;
    
    int index = linear_search(arr, size, value);
    if (index != -1) {
        printf("Value %d found at index %d\n", value, index);
    } else {
        printf("Value %d not found in the array\n", value);
    }
    
    return 0;
}
