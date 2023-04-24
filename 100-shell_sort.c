#include "sort.h"

/**
 * swap - to swap the elements
 *
 * @x: number of index
 * @y: number of index
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * shell_sort - a function used to sortt an array using shell sort
 *
 * @array: index elements
 * @size: size of the array element
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	for (gap = size / 2; gap > 0; gap /= 2)
	{
			for (j = gap; j < size; j += 1)
			{
				for (i = j - gap; i >= gap; i -= gap)
				{
					if(array[i + gap] > array[i])
					{
						break;
					}
					else
					{
						swap(&array[i + gap], &array[i]);
						print_array(array, size);
					}
				}
			}
	}
}
