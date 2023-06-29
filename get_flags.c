#include "main.h"

/**
 * get_flags -> This calculates active flags
 * @format: Formatted string in which to print the arguments
 * @n: parameter to take
 * Return: Flags
 */

int get_flags(const char *format, int *n)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int m, curr_n;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_n = *n + 1; format[curr_n] != '\0'; curr_n++)
	{
		for (m = 0; FLAGS_CH[m] != '\0'; m++)
			if (format[curr_n] == FLAGS_CH[m])
			{
				flags |= FLAGS_ARR[m];
				break;
			}

		if (FLAGS_CH[m] == 0)
			break;
	}

	*n = curr_n - 1;

	return (flags);
}
