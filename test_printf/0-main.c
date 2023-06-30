#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	int len; 
	int len2;
	unsigned int ui; 

	len = _printf("let's try to print a simple sentence.\n");
	len2 = printf("let's try to print a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	_printf("character:[%c]\n", 'H');
	printf("character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string");
	printf("String:[%s]\n", "I am a string");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	_printf("length: [%d, %i]\n", len, len);
	printf("length: [%d, %i]\n", len2, len2);
	_printf("Negative: [%d]\n", -762534);
	printf("Negative: [%d]\n", -762534);
	printf("Len:[%d]\n", len);
	_printf("Len:[%d]\n", len2);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);

	return (0);
}
