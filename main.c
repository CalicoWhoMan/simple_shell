#include "shell.h"
/*
 * main - main script for the shell
 *
 * Return: void
 */
		
int main(__attribute__((unused)) int ac, char *argv[])
{
	int bootup = isatty(STDIN_FILENO);
	int b_name;/*shell name*/
	int inc;
	char *buffer = NULL;/*the string from user*/
	char **DTA = NULL;
	size_t waiting4u = 0;/*user input*/
	size_t p2v_size = 0; /*pointer to a variable that keeps the array's size*/

	while (1 != 0)
	{
		if (bootup == 1)
		b_name = write(STDOUT_FILENO, "$YOU_DA_MAN ", 12); /*shell name*/
		{
			if (bootup == -1)
			printf("Error");
		}
		waiting4u = getline(&buffer, &p2v_size, stdin);/*wait for user input*/
		if (waiting4u == EOF)
		{
			break; /*getline error*/
		}
		buffer[waiting4u - 1] ='\0'; /*check if its null byte*/
		DTA = _delim(buffer); /*delimated tokenized array of strings*/
		if (_strcmp(DTA[0], "exit") == 0)
		{
		while (DTA[inc])
			free(DTA[inc++]);
		free(DTA);
		break;
		}
	}
}
