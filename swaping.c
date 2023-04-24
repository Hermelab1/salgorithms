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
