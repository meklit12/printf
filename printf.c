#include <stdio.h>
#include <starg.h>
#include <string.h>
#include "main.h"
/**
 *_printf -a function that prints
 * @format:pointer
 * Return: integer value
 */
int _printf(const char *format, ...)
{
va_list args;
int we;
va_start(args, format);
we = vfprintf(stdout, format, args);
va_end(args);
return (we);
}
