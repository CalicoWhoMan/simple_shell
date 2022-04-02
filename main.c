#include "shell.h"
/**
 * main - main script for the shell
 * @ac: not used
 * @argv: array cmmds
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
size_t buffer_size = 1024; /*pointer to a variable that keeps the arr size*/

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
buffer[waiting4u - 1] = '\0'; /*setting first char null byte*/

DTA = _delim(buffer, _findpath); /*THIS line needs to use the PATH and buffer input*/
if (DTA == NULL)
continue;
}
}
}
