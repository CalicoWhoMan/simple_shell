#include "shell.h"
/*
 * main - main script for the shell
 *
 * Return: void
 */

int main(void)
{
	int bootup = isatty(STDIN_FILENO);
	int b_name;/*shell name*/
	char *NOLL = NULL;/*the string from user*/ 
	size_t waiting = 0;/*user input*/
	size_t n = 0; /**/

	while (1 != 0)
	{
		if (bootup == 1)
		b_name = write(STDOUT_FILENO, "$YOU_DA_MAN ", 12); /*shell name*/
		{
			if (bootup == -1)
			printf("Error");
		}
		waiting = getline(&NOLL, &n, stdin);/*wait for user input*/
		if (waiting == EOF)
		{
			break; /*getline error*/
		}
		/*need to handle the args in the string, serperate them*/
		
}
