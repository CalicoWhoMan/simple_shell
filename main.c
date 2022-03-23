#include "shell.h"
/*
 * main - main script for the shell
 *
 * Return: void
 */

int main(void)
{
	int bootup = isatty(STDIN_FILENO);
	int b_name;
	char *NOLL = NULL; 
	size_t waiting = 0;
	size_t n = 0;

	while (1 != 0)
	{
	if (bootup == 1)
	b_name = write(STDOUT_FILENO, "$YOU_DA_MAN ", 12); /*shell name*/
	{
	if (bootup == -1)
	printf("Error");
	}
	waiting = getline(&NOLL, &n, stdin);
	}
}
