#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	size_t n = 50;
	int *array = rand_array(n, 100);

	print_array(array, n);
	printf("\n");
	counting_sort(array, n);
	printf("\n");
	print_array(array, n);
	check_array(array, n);
    
    return (0);
}

