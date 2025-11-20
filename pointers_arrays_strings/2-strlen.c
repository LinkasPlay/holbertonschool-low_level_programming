#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string to check
 *
 * Description: This function counts the number of characters
 * in a string until the null terminator is reached.
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
