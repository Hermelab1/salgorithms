#include "sort.h"

/**
 * shell_sort - a function used to sortt an array using shell sort
 *
 * @array: index elements
 * @size: size of the array element
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1;
	int temp;
	int i;
	int j;

	while (gap < size / 3)
		gap = gap * 3 + 1;
	while (gap > 0)
	{
		for (i = gap; i < (int)size; i++)
		{
			temp = array[i];
			j = i;

			while (j >= (int)gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j -= gap;
			}
			array[j] = temp;
		}
		print_array(array, size);
		gap /= 3;
	}
}
