#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to reverse
 *
 * Description: This function reverses the content of the string
 * in place by swapping characters from both ends moving inward.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (s[j] != '\0')
	{
		j++;
	}
	j--; /* Move to last valid character */

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
