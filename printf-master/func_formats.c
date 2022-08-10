#include "holberton.h"

/**
 * print_char - Prints a character.
 * @arg: Arguments.
 *
 * Return: Number of character.
 */
int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);

	write(1, &c, 1);
	return (1);
}

/**
 * print_string - Prints a string.
 * @arg: Arguments.
 *
 * Return: Number of character.
 */

int print_string(va_list arg)
{
	char *_string;
	int size_string;

	_string = va_arg(arg, char *);

	if (_string == NULL)
		_string = "(null)";

	for (size_string = 0; *_string != '\0'; size_string++)
	{
		write(1, _string, 1);
		_string++;
	}
	return (size_string);
}

/**
 * print_percent - Prints a percent.
 * @percent: Arguments.
 * @buff: Pointer to buffer.
 *
 * Return: Number of character percent.
 */

int print_percent(char *percent, char *buff)
{
	percent++;
	_putchar(buff, '%');
	return (1);
}

/**
 * print_integer - Prints a integers.
 * @arg: Arguments.
 *
 * Return: The value of _int.
 */
int print_integer(va_list arg)
{
	int _num, i, n, k, _integer;

	k = 1;
	_integer = 0;
	n = va_arg(arg, int);
	_num = n;

	if (n < 0)
	{
		k = k * -1;
		_puts('-');
		_integer++;
	}
	while (_num > 9 || _num < -9)
	{
		_num = _num / 10;
		k = k * 10;
	}
	while (k > 9 || k < -9)
	{
		i = (n / k) % 10;
		_puts(i + '0');
		k = k / 10;
		_integer++;
	}
	if (n < 0)
	{
		_puts((n % 10) * -1 + '0');
		_integer++;
	}
	else
	{
		_puts(n % 10 + '0');
		_integer++;
	}
	return (_integer);
}

/**
 * print_decimal - Prints decimal numbers.
 * @arg: Arguments.
 *
 * Return: Number of character.
 */
int print_decimal(va_list arg)
{
	int dec;

	dec = print_integer(arg);

	return (dec);
}
