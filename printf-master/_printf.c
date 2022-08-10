#include "holberton.h"
/**
 * _printf - produces output according to a format.
 * @format: pointer to character string.
 *
 * Return: number of character printed excluding null byte.
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int (*fmtout)();
	int count, len_count = 0;

	if ((!format) || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(arg, format);

	count = 0;
	while (format[count] && format)
	{
		if (format[count] == '%')
		{
			if (format[count + 1] != '%')
			{
				fmtout = _formats(format[count + 1]);

				if (fmtout)
					len_count += fmtout(arg), count++;
				else
					write(1, &format[count], 1), len_count++;
			}
			else
			{
				write(1, &format[count], 1);
				len_count++;
				count++;
			}
		}
		else
		{
			write(1, &format[count], 1);
			len_count++;
		}
		count++;
	}
	va_end(arg);
	return (len_count);
}
