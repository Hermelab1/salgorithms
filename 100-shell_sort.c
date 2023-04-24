#include "sort.h"

/**
 * shell_sort - a function used to sortt an array using shell sort
 *
 * @array: index elements
 * @size: size of the array element
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;
	int temp;

	for (gap = size/2; gap > 0; gap /= 2)
	{
		for (i = gap; i < size; i += 1)
		{
			temp = array[i];
			for(j = i; j >= gap && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}
	}
}
