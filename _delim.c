#include "shell.h"

/**
 * _delim - function to deliminate and tokenize a string
 * @del_st: string to take in to above
 * Return: pointer to an array array tokenized strings with null byte strings
 */

char **_delim(char *cmd char *del)
{
	int len_cmd = _strlen(cmd);
	char **arr = NULL;
	char *str = NULL;
	int inc;

	if (cmd[0] == '\0')
		return (NULL);
	str = strtok(cmd, del);

	arr = malloc(sizeof(char *) * (cmd * 2));
	str = strtok(cmd, del);
	for (inc = 0; str != NULL; inc++)
	{
		arr[inc] = str;
		str = strtok(NULL, " ");
	}
	arr[inc] = '\0';
	return (arr);
}
