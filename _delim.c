#include "shell.h"
/**
 * _delim - function to deliminate and tokenize a string
 * @del: delimiter to take in
 * @cmd: user input
 * Return: pointer to an array array tokenized strings with null byte strings
 */

char **_delim(char *str, char delim)
{
int len_cmd = _strlen(cmd);
char **arr = NULL;
char *str = NULL;
int inc;

arr_tok = [' ', "/n"];
if (cmd[0] == '\0')
return (NULL);
str = strtok(cmd, arr_tok);

arr = malloc(sizeof(char *) * (inc + 1));
str = strtok(cmd, arr_tok);
for (inc = 0; str != NULL; inc++)
{
arr[inc] = str;
str = strtok(NULL, " ");
}
arr[inc] = '\0';
return (arr);
}
