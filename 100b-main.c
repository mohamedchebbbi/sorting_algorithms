#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    size_t n = 10;
    int *array = rand_array(n, 0);

    print_array(array, n);
    printf("\n");
    shell_sort(array, n);
    printf("\n");
    print_array(array, n);
    check_array(array, n);
    return (0);
}
