#include "main"

/**
 * _strcmp -  a function that compares two strings.
 * @s1: first one to compare
 * @s2: the other one
 * Return: an int less,equal or greater than 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (i >= j)
	{
		for (k = 0; s1[k] != '\0'; k++)
			return (s1[0] - s2[0]);
	}
	else
	{
		for (k = 0; s2[k] != '\0'; k++)
			return (s1[0] - s2[0]);
	}
	return (0);
}

