#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function to reverse the content of an array of integers
 * @a - array
 * @n - number of characters
 */
void reverse_array(int *a, int n)
{
    int *start = a;            // Pointer to the start of the array
    int *end = a + n - 1;      // Pointer to the end of the array

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
