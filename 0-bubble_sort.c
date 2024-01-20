#include "sort.h"

/**                                             * swap - swaps integers in an array            * @xp: first integer                           * @yp: second integer                          */                                            void swap(int *xp, int *yp)                    {                                                      int temp  = *xp;
        *xp = *yp;                                     *yp = temp;                            }

/**
 * bubble_sort - sorts an array of integers
 * @array: array of integers
 * @size: number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}
