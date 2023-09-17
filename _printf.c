#include <stdarg.h>
#include <unistd.h>
#include "main.h"
int _printf(const char *format, ...);
int _strlen(const char *str);
int _printf(const char *format, ...)
{
	va_list list;
	char ch, var;
	const char *string;
	int format_len = 0, int_num, bin;

	va_start(list, format);
	while (format != NULL && *format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
			{
				string = va_arg(list, const char *);
				if (string == NULL)
					string = "(nuil)";
				write_out(string);
				format_len += _strlen(string);
			}
			else if (*format == 'c')
			{
				ch = va_arg(list, int);
				write(1, &ch, 1);
				format_len++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int_num = va_arg(list, int);
				format_len += count_digit(int_num, 0);
				write_digit(int_num);
			}
			else if (*format == '%')
			{
				write(1, "%", 1);
				format_len++;
			}
			else if (*format == 'b')
			{
				bin = va_arg(list, int);
				format_len += write_binary(bin);
			}
		}
		else
		{
			var = *format;
			write(1, &var, 1);
			format_len++;
		}
		format++;
	}
	va_end(list);
	return (format_len);
}
/**
 * _strlen - calculate the length of the string
 * @str: a string in an array of characters
 * Return: the lenght of the string
*/
int _strlen(const char *str)
{
	int i;
	int size = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	return (size);
}
/**
 * write_out - write out the numbers of the output
 * @str: a character of array in the string
 * Return: numbers of write out
*/
void write_out(const char *str)
{
	int i;
	char ch;

	for (i = 0; str[i] != '\0'; i++)
	{
		ch = str[i];
		write(1, &ch, 1);
	}
}
