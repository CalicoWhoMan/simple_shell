#include "shell.h"

char **_delim(char *cmd, char delim)
{
int len_cmd = _strlen(cmd);
char **arr = NULL;
char *str = NULL;
int inc;

if (cmd[0] == '\0')
return (NULL);
str = strtok(cmd, " ");

arr = malloc(sizeof(char *) * (str + 1));
str = strtok(cmd, " ");
for (inc = 0; str != NULL; inc++)
{
arr[inc] = str;
str = strtok(NULL, " ");
}
arr[inc] = '\0';
return (arr);
}

void main(void)
{
char *s = "This string needs to be tokenized";

DTA = _delim(s, delim);
printf("DTA is: %s", DTA);
}
