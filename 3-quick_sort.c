#include "sort.h"

/**
 * swap - swaps elements of an array
 * @xp: first element
 * @yp: second element
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * quick_sort - sorts an array in ascending order
 * using the Quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	size_t j, i = (low - 1);
	int pivot = high

	if (array == NULL || size < 2)
	{
		return;
	}
	for (j = low, j = high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}
