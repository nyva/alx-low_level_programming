#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: destination
 * @src: source that will be copied
 * @n:it will use at most n bytes from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0, len;

	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (n > j)
	{
		while (src[j])
		{
			dest[i + j] = src[j];
			j++;
		}
		len = i + j;
	}
	else
	{
		while (k < n)
		{
			dest[i + k] = src[k];
			k++;
		}
		len = i + n;
	}

	dest[len] = '\0';
	return (dest);
}

