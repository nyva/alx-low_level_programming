#include <stdio.h>

/**
 * main -  prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
