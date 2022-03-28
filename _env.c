#include "shell.h"
/**
 * _env - prints the env builtin
 * Return: 0 or -1 if fails
 */

void _env(void)
{
	extern char **evo;
	int inc;

	for (inc = 0; evo[inc] != NULL; inc++) 
	{
		write(STDOUT_FILENO, evo[inc], _strlen(evo[inc]));
		write(STDOUT_FILENO, "/n", 1);
	}
}
