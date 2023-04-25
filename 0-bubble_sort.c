#include "sort.h"
#include <stdio.h>

void swap(int *a, int *b);
void bubble_sort(int *array, size_t size);

/**
 * swap- function to swap the element in an array
 * @a: first element
 * @b: second element
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * bubble_sort- sorting arrays in ascending order using bubble_sort
 * @array: elements present
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, leng = size
	bool swapped = false;

	if (array == NULL || size < 2)
		return;

	while (swapped == false)
	{
		swapped = true;
		for (i = 0; i < leng - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array[i], array[i + 1]);
				print_array(array, size);
				swapped = false
			}
		}
		leng--;
	}
}
