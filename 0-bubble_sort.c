#include "sort.h"

/**
 * bubble_sort - Sort array of integers using bubble sort
 * array: pointer to integer array
 * size: array size
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	int i, tmp, len;
	bool swapped = true;
	
	len = size;
	while (swapped == true)
	{
		swapped = false;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				swapped = true;
			}
		}
		len--;
	}

	return;
}
