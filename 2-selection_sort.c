#include "sort.h"
/**
 * selection_sort - sort the array by selection
 * @array: array  to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	int swap, flag = 0;
	size_t min, i, j;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		flag = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
				flag += 1;
			}
		}
		swap = array[i];
		array[i] = array[min];
		array[min] = swap;
		if (flag != 0)
			print_array(array, size);
	}
}
