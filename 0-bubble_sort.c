#include "sort.h"

/**
 * bubble_sort - Function that sorts an array of ints
 * using bubble sort algo
 * @array: array of ints
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, t;
	int temp;

	if (!array || !size)
		return;
	i = 0;
	while (i < size)
	{
		for (t = 0; t < size - 1; t++)
		{
			if (array[t] > array[t + 1])
			{
				temp = array[t];
				array[t] = array[t + 1];
				array[t + 1] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
}
