#include "sort.h"
/**
 * shell_sort - function sorts array using
 * shell algorithm
 *
 * @array: parameter 1
 * @size: size of the array
 *
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k = 0;
	int temp = 0;

	if (array == NULL || size < 2)
	{
		return;
	}
	while (k < size / 3)
	{
		k = k * 3 + 1;
	}
	for (; k > 0; k = (k - 1) / 3)
	{
		for (i = k; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= k && array[j - k] > temp; j -= k)
			{
				if (array[j] != array[j - k])
				{
					array[j] = array[j - k];
				}
				if (array[j] != temp)
				{
					array[j] = temp;
				}
			}
		}
		print_array(array, size);
	}
}
