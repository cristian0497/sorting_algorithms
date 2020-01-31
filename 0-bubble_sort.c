#include "sort.h"
/**
 * bubble_sort - algorithm to sort an array and print
 * @array: an array of Size N, to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int aux;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				aux = array[x + 1];
				array[x + 1] = array[x];
				array[x] = aux;
				print_array(array, size);
			}
		}
	}
}
