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
 * lomuto_partition - Order a subset of an array of integers
 * according to lomuto partition scheme
 * @array: array of integers
 * @size: size of the array
 * @left: The starting index of the subset to order.
 * @right: The ending index of the subset to order.
 * Return: Return the final partition index
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int  *pivot, above, below;

	pivot = array + right;

	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}
	if (array[above] > *pivot)
	{
		swap(array + above, pivot);
		print_array(array, size);
	}
	return (above);
}

/**
 * lomuto_sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @left: The starting index of the array partition to order.
 * @right: The ending index of the array partition to order.
 * Description: Uses the Lomuto partition scheme.
 * Return: returns a sorted partition
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending
 * using Quick sort algorithm
 * @array: array of integers
 * @size: size of the array
 * Description: Uses the Lomuto partition scheme. Prints
 * the array after each swap of two elements.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	lomuto_sort(array, size, 0, size - 1);
}
