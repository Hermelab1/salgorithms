#include "sort.h"

/**
 * swap - to swapping the array element
 *
 * @x: index number
 * @y: index number
 */
void swap(int *x, int *y)
{
        int temp = *x;
        *x = *y;
        *y = temp;
}

/**
 * lomuto_partition - partitions an array of integers using
 *                    Lomuto partition scheme
 * @array: array to be partitioned
 * @low: low index
 * @high: high index
 * @size: size of the array
 *
 * Return: index of pivot element
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * sort_helper - sorts an array of integers in ascending order using
 *               the Quick sort algorithm
 * @array: array to be sorted
 * @low: low index
 * @high: high index
 * @size: size of the array
 */
void sort_helper(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = lomuto_partition(array, low, high, size);
		sort_helper(array, low, p - 1, size);
		sort_helper(array, p + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order using
 *               the Quick sort algorithm
 *
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	sort_helper(array, 0, size - 1, size);
}
