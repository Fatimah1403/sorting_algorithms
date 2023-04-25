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
	int i, j;
	bool swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], array[j + 1]);
				print_array(array, size);
				swapped = true;				}
			}

		}
		if (swapped == false)
			break;

	}

}
