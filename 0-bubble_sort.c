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

	size_t i, index, tmp = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (index = 0; index < size; index++)
		{
			if (array[index] > array[index + 1] && array[index + 1])
			{
			tmp = array[index];
			array[index] = array[index + 1];
			array[index + 1] = tmp;
			print_array(array, size);
			}
		}
}
