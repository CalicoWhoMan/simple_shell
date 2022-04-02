#include "shell.h"
/**
 * _findpath - func to deliminate input and find path
 * @argc: argc
 * @argv: argv
 * Return: 0 for success -1 for failure
 */
int _findpath(char **buffer, char cmd)
{
char *s;
char *str;
int inc = 0;
char **command = argv[];
char *cmdpath;
char **environ;

for (inc = 0; environ[inc] != NULL; inc++)
{
if (_strncmp(environ[inc], "PATH", 4) == 0)/*fix to accept 3*/
s = (environ[inc]);
}
str = strtok(&s[5], ":");
while (str != NULL)
{
cmdpath = str_concat(str, command);
/*printf("%s, ",cmdpath);*/
str = strtok(NULL, ":");
/*stat(cmdpath, &sb);*/
/*if (stat(cmdpath, &sb) == 0)*/
/*execve(cmdpath, &argv[1], NULL);*/
}
}
