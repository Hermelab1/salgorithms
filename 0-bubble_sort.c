#include "sort.h"

/**
 * bubble_sort - a sorting algorithm it works by repeatedly swappingth
 *               adjacent element if they are in the wrong order.
 *
 * @array: array elements
 * @size: number of elements in array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1] && array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
