#include "main.h"
/**
 * handle_print - Prints an argument based on its type
 * @fmat: Formatted string in which to print the arguments.
 * @list: List of printed arguments.
 * @ind: ind.
 * @buffer: Buffer array to handle print.
 * @flags: Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: 1 or 2;
 */
int handle_print(const char *fmat, int *ind, va_list list, char buffer[],
	int flags, int width, int precision, int size)
{
	int n, unknow_len = 0, printed_chars = -1;
	fmat_t fmat_types[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent},
		{'i', print_int}, {'d', print_int}, {'b', print_binary},
		{'u', print_unsigned}, {'o', print_octal}, {'x', print_hexadecimal},
		{'X', print_hexa_upper}, {'p', print_pointer}, {'S', print_non_printable},
		{'r', print_reverse}, {'R', print_rot13string}, {'\0', NULL}
	};
	for (n = 0; fmat_types[n].fmat != '\0'; n++)
		if (fmat[*ind] == fmat_types[n].fmat)
			return (fmat_types[n].fn(list, buffer, flags, width, precision, size));

	if (fmat_types[n].fmat == '\0')
	{
		if (fmat[*ind] == '\0')
			return (-1);
		unknow_len += write(1, "%%", 1);
		if (fmat[*ind - 1] == ' ')
			unknow_len += write(1, " ", 1);
		else if (width)
		{
			--(*ind);
			while (fmat[*ind] != ' ' && fmat[*ind] != '%')
				--(*ind);
			if (fmat[*ind] == ' ')
				--(*ind);
			return (1);
		}
		unknow_len += write(1, &fmat[*ind], 1);
		return (unknow_len);
	}
	return (printed_chars);
}
