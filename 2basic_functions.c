#include "shell.h"

/**
 * _strncmp - compares n characters of 2 strings
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 * @n: number of character to check
 *
 * Return: difference between the nth character
 */

int _strncmp(char *s1, char *s2, int n)
{
int i = 0;

while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
{
i++;
if (i + 1 == n)
break;
}

return (s1[i] - s2[i]);
}

/**
 * str_concat - concats 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: concatted string
 */

char *str_concat(char *s1, char *s2)
{
char *n;
int i, a;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
n = malloc(_strlen(s1) + _strlen(s2) + 1);
if
(n == 0)
{
return (NULL);
}
for (i = 0; s1[i]; i++)
{
n[i] = s1[i];
}
for (a = 0; s2[a]; i++, a++)
{
n[i] = s2[a];
}
n[i] = 0;
return (n);
}
