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
 * selection_sort - sorts an arraay of integers in ascending order
 * using the Selection sort algorithm
 * @array: list of elements
 * @size: number of elements
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	for (i = 0; i < size; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_idx])
				min_idx = j;
		if (min_idx != i)
			swap(&array[i], &array[min_idx]);
		print_array(array, size);
	}
}
