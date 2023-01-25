#include "sort.h"

/**
 * bubble_sort -function sorts array elements from minimum
 * to maximum
 *
 * @array: parameter 1
 * @size: size of given array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;

	size_t j;

	size_t temp = 0;

	if (size < 2)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1] && array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
