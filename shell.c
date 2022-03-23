#include "shell.h"
/*
 * main - This is the MAIN script for running the SHELL
 * 
 * Return: 0
 */

int main(void)
{
	int bootup;
	char *line = NULL;
	size_t user_input;
	size_t n;

	do {
	i = 0;
	if (isatty(STDIN_FILENO))
	bootup = write(STDOUT_FILENO, "$YOU_DA_MAN ", 12); /*shell name*/

	user_input = getline(&line, &n, stdin); /*gets the user input*/
	if (user_input == EOF) /*checks EOF*/
	printf("EOF ERROR");
	signal(SIGINT, sigstop); /*handles Ctrl + C*/
	break;
	/*delims*/
	/**/
	
}
}
