#include "sort.h"
/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, tmp = 0;
	int flag = 0, size2 = size, j;

	if (array == NULL && size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size2; j++)
		{
			if (array[j - 1] > array[j] && array[j - 1])
			{
			flag = 1;
			tmp = array[j];
			array[j] = array[j - 1];
			array[j - 1] = tmp;
			print_array(array, size);
			}
		}
		if (flag == 0)
			break;
		flag = 0;
		size2--;
	}
}
