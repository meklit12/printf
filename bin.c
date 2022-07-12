#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"
/**
 * _printf - a function that prints
 * @format: pointer
 *
 * Return: integer value
 */
int _printf(const char *format, ...)
{
va_list args;
int we,a[10], i, n;
if(*format == 'b')
{
for (i = 0; n > 0; i++)
{
a[i] = n % 2;
n = n/2;
}
for (i = i - 1; i >= 0; i++)
{
return (a[i]);
}
}
va_start(args, format);
we = vfprintf(stdout, format, args);
va_end(args);
return (we);
}
