#include "sort.h"

/**
 * selection_sort - function sorts an array using
 * selection algorithm
 *
 * @array: parameter 1
 * @size: size of the array 
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int temp = 0;
	size_t i;
	size_t j;
	size_t p;

	if (array == NULL || size == 0)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		p = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[p])
			{
				p = j;
			}
		}
		if (p != i)
		{
			temp = array[i];
			array[i] = array[p];
			array[p] = temp;
			print_array(array, size);
		}
	}
}
