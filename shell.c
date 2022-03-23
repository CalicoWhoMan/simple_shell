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
	signal(SIGINT, sigstop);
	user_input = getline(&line, &n, stdin); /*gets the user input / line is a stored pointer of the buffer text */
	/* need to free getline since *line is NULL*/
	if (user_input == EOF) /*checks EOF*/
	printf("EOF ERROR");
	if (
	
}
}
