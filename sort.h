#ifndef _SORT_H_
#define _SORT_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
listint_t *swap_node(listint_t *temp, listint_t **list);
void selection_sort(int *array, size_t size);
void t_swap(int *array, ssize_t item1, ssize_t item2);
int array_partition(int *array, ssize_t first, ssize_t last, size_t size);
void qs(int *array, ssize_t first, ssize_t last, int size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void *_malloc(unsigned int memb, unsigned int size);
void counting_sort(int *array, size_t size);

#endif
