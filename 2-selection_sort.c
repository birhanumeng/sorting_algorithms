#include "sort.h"

/**
 * selection_sort - Sort an array of integers using the selection sort.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	int min, tmp;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
			min = (array[j] < min) ? array[j] : min;

		if (array[i] != min)
		{
			tmp = min;
			min = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
