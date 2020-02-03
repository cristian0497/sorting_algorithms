#include "sort.h"
#include <stdio.h>
/**
 * selection_sort - algorithm to sort array
 * @array: values to be sorted
 * @size: size of the value
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y, idx;
	int less_val = 0;
	int tmp;

	for (x = 0; x < size; x++)
	{
		less_val = array[x];
		for (y = x; y < size; y++)
		{
			if (array[y] < less_val)
			{
				less_val = array[y];
				idx = y;
			}
		}
		if (array[x] > less_val)
		{
			tmp = array[x];
			array[x] = less_val;
			array[idx] = tmp;
			print_array(array, size);
		}
	}
}
