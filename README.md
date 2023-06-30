Printf()-project

Group Project:The printf project is a collaboration between Uchenna Oko and Sadick Salifu, students of Software Engineering at ALXSE program cohort 15. The aim of the project is to write a function named "_printf()" which imitates/copies the actual "printf" function of C language found in the <stdio.h> library. Some of the fundamental features and functions can be found in the man 3 printf.

_printf() function write its output to the stdout, the standard output stream. Returns the number of characters printed when the function is successful and -1 when the function fails. Where format contains the string that is printed.

The available convertion specifiers are:

%c: Prints a single character.
%s: Prints a string of characters.
%d: Prints integers.
%i: Prints integers.
%o: Prints unsigned octal intergers
%u: Prints unsigned decimal intergers
%x: Prints unsigned hexadecimal intergers
%X: Prints unsigned hexadecimal intergers....

_printf() is a function that performs formatted output conversion and prints data.
* Prototype: int _printf(const char *format, ...);

Usage

* Compilation of code with: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format  *.c
* Include the "main.h" header file on the main files

Authorized functions and macros
. write (man 2 write)
. malloc (man 3 malloc)
. free (man 3 free)
. va_start (man 3 va_start)
. va_end (man 3 va_end)
. va_copy (man 3 va_copy)
. va_arg (man 3 va_arg)

Examples

1- Prints an integer number
Usecase: _printf("Length:[%d, %i]\n", 39, 39);
Output: Length:[39, 39]

Usecase: _printf("Negative:[%d]\n", -762534);
Output: Negative:[-762534]

2- Prints the string "I am a string"
Usecase: _printf("String:[%s]\n", "I am a string !");
Output: String:[I am a string !]

3- Prints an integer number
Usecase: _printf("Length:[%d, %i]\n", 39, 39);
Output: Length:[39, 39]
Usecase: _printf("Negative:[%d]\n", -762534);
Output: Negative:[-762534]

4- Prints an unsigned number
Usecase: _printf("Unsigned:[%u]\n", 2147484671);
Output: Unsigned:[2147484671]

5- Prints an unsigned number in octal
Usecase: _printf("Unsigned octal:[%o]\n", 2147484671);
Output: Unsigned octal:[20000001777]

6- Prints an unsigned number in hexadecimal
Usecase: _printf("Unsigned hexadecimal:[%x, %X]\n", 2147484671, 2147484671);
Output: Unsigned hexadecimal:[800003ff, 800003FF]

7- Prints an address
Usecase: _printf("Address:[%p]\n", 0x7ffe637541f0);
Output: Address:[0x7ffe637541f0]

8- Prints the character 'H'
Usecase: _printf("Character:[%c]\n", 'H');
Output: Character:[H].....

# Tasks

**The Mandatory tasks are below**

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life.
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
	c
	s
	%

You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

1. Education is when you read the fine print. Experience is what you get if you don't.

Handle the following conversion specifiers:
	d
	i

You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

**Advanced tasks below**

2. With a face like mine, I do better in print.

Handle the following custom conversion specifiers:
b: the unsigned int argument is converted to binary

3. What one has not experienced, one will never understand in print
Handle the following conversion specifiers:

	u
	o
	x
	X

You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

4. Nothing in fine print is ever good news.
Use a local buffer of 1024 chars in order to call write as little as possible.

5. My weakness is wearing too much leopard print.

Handle the following custom conversion specifier:
	S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print.

Handle the following conversion specifier: p.
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

7. The big print gives and the small print takes away.

Handle the following flag characters for non-custom conversion specifiers:
	+
	space
	#.

8. Sarcasm is lost in print.
Handle the following length modifiers for non-custom conversion specifiers:
	l
	h
Conversion specifiers to handle: d, i, u, o, x, X

9. Print some money and give it to us for the rain forests.
Handle the field width for non-custom conversion specifiers.

10. The negative is the equivalent of the composer's score, and the print the performance.
Handle the precision for non-custom conversion specifiers.

11. It's depressing when you're still around and your albums are out of print.
Handle the 0 flag character for non-custom conversion specifiers.

12. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection.
Handle the - flag character for non-custom conversion specifiers.

13. Print is the sharpest and the strongest weapon of our party.
Handle the following custom conversion specifier:
r : prints the reversed string.

14. The flood of print has turned reading into a process of gulping rather than savoring.
Handle the following custom conversion specifier:
R: prints the rot13'ed string

15. *
All the above options work well together.
