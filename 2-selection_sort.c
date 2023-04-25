#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - sort the array in an ascending order
 *		using selection sort
 * @array: array of integers
 * @size: size of the array
 *
 * Description: Prints the array after being sorted
 */
void selection_sort(int *array, size_t size)
{
	int i, j, min_idx;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
			swap_ints(min_idx, array[i]);
			print_array(array, size);
	}

}
