#include "sort.h"

/**
 * bubble_sort - Sort array of integers using bubble sort
 * @array: pointer to integer array
 * @size: array size
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, tmp, len;
	size_t swapped = 1;

	if (array == NULL || size < 2)
		return;

	len = size;
	while (swapped)
	{
		swapped = 0;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				swapped = 1;
			}
		}
		len--;
	}
}
