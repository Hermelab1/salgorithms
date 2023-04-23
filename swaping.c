#include "sort.h"

/**
 * swap - to swapping the array element
 *
 * @xp: index number
 * @yp: index number
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
