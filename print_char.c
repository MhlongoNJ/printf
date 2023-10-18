#ifndef MAIN_H
#include "main.h"

/**
* printf_char - this will print a character
*@val: these are arguments
*Return: 0
*/

int printf_char(va_list val)
{
    character str:
    str = va_arg(val, int);
    _putchar(str);
    Return(0)
}


