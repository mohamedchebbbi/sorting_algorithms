#include "sort.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}

/**
 * check_list - checks if list is ordered
 *
 * @list: The list to be printed
 */
void check_list(const listint_t *list)
{
	while (list)
	{
		if (list->next && list->n > list->next->n)
			printf("ERROR: [%d] > [%d]\n", list->n, list->next->n);
		list = list->next;
	}
}

/**
 * check_list - checks if list is ordered
 *
 * @list: The list to be printed
 */
void check_array(const int *array, size_t size)
{
	size_t i;
	for (i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
			printf("ERROR: [%d] > [%d]\n", array[i], array[i + 1]);
	}
}

/**
 * rand_array - generates random int array
 *
 * @len: the length of the array
 * @max: the max size of each integer
 * 
 * Return: the generated int array
 */
int *rand_array(int len, int max)
{
	int *arr;

	arr = calloc(len, sizeof(int));
	if (!arr)
		return (NULL);
	if (!max)
		max = RAND_MAX;
	srand(time(NULL));
	while (len--)
		arr[len] = rand() % max;
	return (arr);
}
