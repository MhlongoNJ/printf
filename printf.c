#include "main.c"

/**
 * _printf - function that produces output according to a format.
 * @format: format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...);

int count = 0;
va_list args;

if (*format == NULL)
return (-1);

va_start(args, format);

while (format !== '\0)
{
if (formmat != '%')
{
{
	write(1, format, 1);
}
}
