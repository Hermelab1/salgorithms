#include "sort.h"

/**
 * swaps - Swap two integers in an array.
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */
void swaps(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * bubble_sort - a sorting algorithm it works by repeatedly swappingth
 *               adjacent element if they are in the wrong order.
 *
 * @array: array elements
 * @size: number of elements in array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swaps(array + j, array + j + 1);
				print_array(array, size);
			}
		}
	}
}
