#include "main.h"

/**
 * reverse_array -a function that reverses the ctent of an array of integers.
 * @a: the array
 * @n: the number
 */

void reverse_array(int *a, int n)
{
	int i, len, tmp1;

	len = n-1;

	for (j = 0; j < n/2; j++)
	{
		tmp1 = a[j];
		a[j] = a[len-j];
		a[len-j] = tmp1;
	}
}

