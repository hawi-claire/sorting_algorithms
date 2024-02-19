#include "sort.h"
#include <stddef.h>

/**
 * swap_ints - Swap two integers in an array.
 * @c: The first integer to swap.
 * @d: The second integer to swap.
 */
void swap_ints(int *c, int *d)
{
	int tmp;

	tmp = *c;
	*c = *d;
	*d = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @intarray: An array of integers.
 * @sizearray: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *intarray, size_t sizearray)
{
	int *min;
	size_t i, j;

	if (intarray == NULL || sizearray < 2)
		return;

	for (i = 0; i < sizearray - 1; i++)
	{
		min = intarray + i;
		for (j = i + 1; j < sizearray; j++)
			min = (intarray[j] < *min) ? (intarray + j) : min;

		if ((intarray + i) != min)
		{
			swap_ints(intarray + i, min);
			print_array(intarray, sizearray);
		}
	}
}
