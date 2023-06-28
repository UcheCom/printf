#include "main.h"

/**
 * get_precision - Calculates the printing precision
 * @format: Formatted string in which to print the arguments
 * @n: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *n, va_list list)
{
	int cur_n = *n + 1;
	int precision = -1;

	if (format[cur_n] != '.')
		return (precision);

	precision = 0;

	for (cur_n += 1; format[cur_n] != '\0'; cur_n++)
	{
		if (is_digit(format[cur_n]))
		{
			precision *= 10;
			precision += format[cur_n] - '0';
		}
		else if (format[cur_n] == '*')
		{
			cur_n++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*n = cur_n - 1;

	return (precision);
}
