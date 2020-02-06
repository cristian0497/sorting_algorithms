#include "sort.h"

/**
 * quick_sort - func to sort
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = size - 1;

	if (size < 2)
		return;
	my_quick_sort(array, low, high, (int)size);
}
/**
 * my_quick_sort - recursion apply function
 * @array: array to sort
 * @low: index 0
 * @high: max index of array
 * @size: high + 1 to print array
 */
void my_quick_sort(int *array, int low, int high, int size)
{
	int piv;

	if (low < high)
	{
		piv = partition(array, low, high, size);
		my_quick_sort(array, low, piv - 1, size);
		my_quick_sort(array, piv + 1, high, size);
	}
}
/**
 * partition -  function to split > piv < algorithm
 * @array: array to be sorted
 * @low: min num of index of array
 * @high: max value of array
 * @size: high + 1
 * Return: pivote num
 */
int partition(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int j;
	int i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[j] != array[i])
				_swap(&array[i], &array[j], array, size);
		}
	}
	_swap(&array[i + 1], &array[high], array, size);
	return (i + 1);
}
/**
 * _swap - swap the index of array
 * @a: value a of array
 * @b: value b of array
 * @array: aray to print
 * @size: size of array
 */
void _swap(int *a, int *b, int *array, size_t size)
{
	if (a != b)
	{
		int t = *a;
		*a = *b;
		*b = t;
		print_array(array, size);
	}
}
