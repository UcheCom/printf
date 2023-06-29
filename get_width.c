#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @n: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *n, va_list list)
{
	int curr_n;
	int width = 0;

	for (curr_n = *n + 1; format[curr_n] != '\0'; curr_n++)
	{
		if (is_digit(format[curr_n]))
		{
			width *= 10;
			width += format[curr_n] - '0';
		}
		else if (format[curr_n] == '*')
		{
			curr_n++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*n = curr_n - 1;

	return (width);
}
