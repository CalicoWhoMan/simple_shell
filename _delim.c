#include "shell.h"

/**
 * _delim - function to deliminate and tokenize a string
 * @del_st: string to take in to above
 * Return: pointer to an array of d'd and t'd strings
 */

char **_delim(char *del_st)
{
	int len_st = _strlen(del_st);
	char **arr = NULL;
	char *str = NULL;
	int inc;

	arr = malloc(sizeof(char *) * (len_st * 2));
	str = strtok(del_st, " ");
	for (inc = 0; str != NULL; inc++)
	{
		arr[inc] = str;
		str = strtok(NULL, " ");
	}
	arr[inc] = '\0';
	return (arr);
}
