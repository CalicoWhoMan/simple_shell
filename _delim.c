#include "shell.h"
/**
 * _delim - func to deliminate input and find path
 * @argc: argc
 * @argv: argv
 * Return: 0 for success -1 for failure
 */
int _delim(int argc, char **argv)
{
char *s;
char *str;
int inc = 0;
char **command = argv[];
char *cmdpath;
struct stat sb;
char **environ;

for (inc = 0; environ[inc] != NULL; inc++)
{
if (_strcmp(environ[inc], "PATH", 4) == 0)/*fix to accept 3*/
s = (environ[inc]);
}
str = strtok(&s[5], ":");
while (str != NULL)
{
cmdpath = str_concat(str, command);
/*printf("%s, ",cmdpath);*/
str = strtok(NULL, ":");
stat(cmdpath, &sb);
if (stat(cmdpath, &sb) == 0)
execve(cmdpath, &argv[1], NULL);
}
}
