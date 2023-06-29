#include "main.h"

void print_buffer(char buffer[], int *buf_ind);

/**
 * _printf - Prints formatted strings
 * @format: string format to print
 * @...: variadic parameters
 *
 * Return: Printed characters.
 */

int _printf(const char *format, ...)
{
	va_list list;
	int flags, width, precision, size, buf_ind = 0;
	int n, printed = 0, printed_chars = 0;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (n = 0; format && format[n] != '\0'; n++)
	{
		if (format[n] != '%')
		{
			buffer[buf_ind++] = format[n];
			if (buf_ind == BUFF_SIZE)
				print_buffer(buffer, &buf_ind);
			/* write(1, &format[n], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buf_ind);
			flags = get_flags(format, &n);
			width = get_width(format, &n, list);
			precision = get_precision(format, &n, list);
			size = get_size(format, &n);
			++n;
			printed = handle_print(format, &n, list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buffer, &buf_ind);

	va_end(list);

	return (printed_chars);
}

/**
 * print_buffer - Prints content of a buffer if is available
 * @buffer: Char arrays
 * @buf_ind: Represents the length. Index at which the next char is added.
 */

void print_buffer(char buffer[], int *buf_ind)
{
	if (*buf_ind > 0)
		write(1, &buffer[0], *buf_ind);

	*buf_ind = 0;
}
