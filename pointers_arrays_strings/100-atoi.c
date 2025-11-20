#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to convert
 *
 * Description: This function ignores any non-digit characters
 * before the number. It handles multiple + and - signs.
 * If no digits are found, returns 0.
 *
 * Return: The integer value of the string
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
			/* Do nothing, sign already handled */
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit_found = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (digit_found)
			break; /* Stop when digits ended */
		i++;
	}

	return (sign * result);
}
