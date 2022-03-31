#include "shell.h"
/**
 * _env - prints the env builtin
 * Return: 0 or -1 if fails
 */

void _env(void)
{
	char **eviron;
	int inc;

	for (inc = 0; eviron[inc] != NULL; inc++)
	{
		write(STDOUT_FILENO, eviron[inc], _strlen(eviron[inc]));
		write(STDOUT_FILENO, "/n", 1);
	}
}
