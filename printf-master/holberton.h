#ifndef HOLBERTON
#define HOLBERTON
#define BUFFER_SIZE 1024

/* Standard Libraries*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct t_types - Struct format
 *
 * @type: Arguments
 * @print: The function associated
 *
 * Description: Define a new type struct t_types
 */

typedef struct t_types
{
	char *type;
	int (*print)();
} f_types;

/* Prototypes */

int _putchar(char *c, int len_buffer);
int _printf(const char *format, ...);
int (*_formats(char form))();
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(char *percent, char *buff);
int print_integer(va_list arg);
int print_decimal(va_list arg);

char *_conect_char(char *connetc, char *src);
void b_cleaner(char *b);
int _puts(char c);
void print_b(char *b, int len);
int _strlen(char *s);


#endif /* HOLBERTON */
