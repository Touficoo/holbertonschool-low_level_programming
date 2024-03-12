#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, c;
	char aux;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c / 2; i++)
	{
		aux = s[i];
		s[i] = s[c - i - 1];
		s[c - i - 1] = aux;
	}
}
