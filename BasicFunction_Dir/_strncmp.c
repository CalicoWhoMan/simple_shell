#include "shell.h"

/**
 * _strncmp - compares n characters of 2 strings
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 * @n: number of character to check
 *
 * Return: difference between the nth character
 */

int _strncmp(char *s1, char *s2, int n)
{
	int i = 0;

	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
		if (i + 1 == n)
			break;
	}

	return (s1[i] - s2[i]);
}
