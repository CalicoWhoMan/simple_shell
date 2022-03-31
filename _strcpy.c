#include "shell.h"

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
