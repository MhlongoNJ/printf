#ifndef MAIN_H
#include "main.h"

/**
* printf_str - this will print a string
*@val: these are arguments
*Return: the length of the string
*/

int printf_string(va_list val)

char *str;
int i;
int length;

str = va_arg(val, char *);
if (str == NULL)
{
    str = "(null)";
    length = _stringlength(str);
    for  (i = 0; i < length; i++)
    _putchar(str[i]);
Return (length);

}
else
{
    length = _stringlength(str);
    for  (i = 0; i < length; i++)
    _putchar(str[i]);
Return (length);
}
