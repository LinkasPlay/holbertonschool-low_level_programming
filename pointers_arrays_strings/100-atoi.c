#include "main.h"

/**
 * _atoi - Converts a string to an integer safely
 * @s: Pointer to the string to convert
 *
 * Description: Handles multiple + and - signs, ignores
 * non-digit characters before the number, stops after digits.
 * Avoids signed integer overflow.
 *
 * Return: The integer value
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int digit_found = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
		{
			/* Do nothing */
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit_found = 1;
			if (sign == 1)
				result = result * 10 + (s[i] - '0');
			else
				result = result * 10 - (s[i] - '0');
		}
		else if (digit_found)
			break;
		i++;
	}

	return (result);
}

