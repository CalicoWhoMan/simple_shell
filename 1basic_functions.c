#include "shell.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 * Return: 0 for strings being same, return - number for different strings
 */

int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
int count = 0;

while (*s != '\0')
{
count++;
s++;
}

return (count);
}

/**
 * _strcpy - copies string pointed by src including null byte
 *  to the nuffer pointed to by dest
 *
 * @src: This is the string to be copied
 * @dest: * to the dest arr where the content is to be copied
 * Return: a Pointer to the string destination
 */

char *_strcpy(char *dest, char *src)
{

int len = 0;

while (*(src + len) != 0)

{

*(dest + len) = *(src + len);
len++;
}

*(dest + len) = 0;

return (dest);

}
