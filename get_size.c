#include "main.h"

/**
 * get_size - This calculates the size to cast the argument
 * @format: Formatted string in which to print
 * @n: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *n)
{
	int cur_n = *n + 1;
	int size = 0;

	if (format[cur_n] == 'l')
		size = S_LONG;
	else if (format[cur_n] == 'h')
		size = S_SHORT;

	if (size == 0)
		*n = cur_n - 1;
	else
		*n = cur_n;

	return (size);
}
