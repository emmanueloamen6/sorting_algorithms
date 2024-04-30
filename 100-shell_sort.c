#include "sort.h"

/**
*swap - the positions of two elements into an array
*@array: array
*@item1: array element
*@item2: array element
*/
void swap(int *array, int item1, int item2)
{

	int tmp;

	tmp = array[item1];
	array[item1] = array[item2];
	array[item2] = tmp;
}
/**
 * shell_sort - sort array by shell sort
 * @array: array to be sorted
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 0, j, i = 0;

	if (array = NULL || size < 2)
		return;
	while (gap < size /3)
		gap = 3 * gap  + 1;
	while (gap >= 1)
	{
		for (j = gap; j < size;  j++)
		{
			for (i = j; i >= gap &&
			 (array[i] < array[i - gap]); i -= gap)
			swap(array, i, i - gap);
		}
		print_array(array, size);
		gap /= 3;
	}
}
