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
        size_t buffer_size = 1024; /*pointer to a variable that keeps the array's size*/

        while (1)
        {
                if (bootup == 1)
                b_name = write(STDOUT_FILENO, "$YOU_DA_MAN ", 12); /*shell name*/
                {
                waiting4u = getline(&buffer, &buffer_size, stdin);/*wait for user input*/
                if (waiting4u == EOF)
                {
                        break; /*getline error*/
                }
                buffer[waiting4u - 1] = '\0'; /*check if first char is null byte*/
                DTA = _delim(buffer, " "); /*DTA is argv*/
                if (DTA == NULL)
                        continue;
		/*_findpath(DTA) and the execve it/fork chid pid*/

		
	}
}
                /*if (_strcmp(DTA[0], "exit") == 0)
                        {
                        if (bootup == 1)
                        {
                        free(buffer);
                        }
                        /*need to free and exit the DTA*/
                
                /*else if (_strcmp(DTA[0], "env") == 0)
                        _evo();
                        /*prints the environment*/
