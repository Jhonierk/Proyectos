#include "holberton.h"

/**
 * *_conect_char - concatenates two strings.
 *
 * @connetc: char that concatenates.
 * @src: char to be concatenated.
 *
 * Return: pointer.
 */
char *_conect_char(char *connetc, char *src)
{
	int post_connect = 0, pos_src = 0;

	while (connetc[post_connect] != '\0')
	{
		post_connect++;
	}
	while (src[post_connect] != '\0')
	{
		connetc[post_connect + pos_src] = src[pos_src];
		pos_src++;
	}
	return (connetc);
}

/**
 * b_cleaner - clear the buffer.
 * @b: pointer to the buffer to clear.
 *
 * Return: pointer to the buffer.
 */
void b_cleaner(char *b)
{
	int clean_b = 0;

	while (clean_b < 1023)
	{
		b[clean_b] = 0;
		clean_b++;
	}
}

/**
 * _puts - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 */
int _puts(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_b - print the buffer.
 * @b: pointer to the buffer.
 * @len: size of the buffer.
 */

void print_b(char *b, int len)
{
	write(1, b, len);
}

/**
 * _strlen - Returns the length of a string
 * @s: string to count.
 *
 * Return: Size of the string.
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
