#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * write_hex - a hexadecimal number is represented by preceding number
 * @num: integer variable
 * @var: character of variable
 * Return: return all integers and character
 */
int write_hex(unsigned int num, char var)
{
	char *str = malloc(100);
	char *ptr = insert_hex(num, str, 0);
	int size = _str_len(ptr);
	int len = size;
	char ch;

	size--;
	if (var == 'X')
	{
		for (; size >= 0; size--)
		{
			ch = ptr[size];
			if (ch >= 'a' && ch <= 'z')
			{
				ch = ch - 32;
				write(1, &ch, 1);
				continue;
			}
			write(1, &ch, 1);
		}
	}
	else
	{
		for (; size >= 0; size--)
		{
			ch = ptr[size];
			write(1, &ch, 1);
		}
	}
	free(ptr);
	return (len);
}
/**
 * insert_hex - insert all hexadecimal characters
 * @num: the parameter of the integer
 * @str: the string of each character
 * @i: iterator
 * Return: return all character
 */
char *insert_hex(unsigned int num, char *str, int i)
{
	unsigned int remainder, res;

	while (1 > 0)
	{
		remainder = num % 16;
		res = num - remainder;
		res = res / 16;
		if (remainder >= 10 && remainder < 16)
	{
		str[i] = 'a' + (remainder - 10);
		i++;
	}
		if (res > 16)
	{
		num = res;
		continue;
	}
		return (call_back(str, i, res));
	}
}
/**
 * write_oct - write the function numbers with arguments and with retun value
 * @num: integer variable
 * @count: return the numbers of function
 * Return: integer
 */
int write_oct(unsigned int num, int count)
{
	unsigned int remainder, res;
	char var, ch;

	remainder = num % 8;
	res = num - remainder;
	count++;
	ch = remainder + '0';
	res = res / 8;
	if (res < 8)
	{
		var = res + '0';
		write(1, &var, 1);
		write(1, &ch, 1);
		count++;
		return (count);
	}
	num = res;
	count = (write_oct(num, count));
	write(1, &ch, 1);
	return (count);
}
/**
 * call_back - call back the numbers of characters
 * @str: string of a character
 * @i: iterator
 * @res: the contraction of all results of charater
 * Return: return all character in string
 */
char *call_back(char *str, int i, unsigned int res)
{
	if (res == 0)
	{
		str[i] = '\0';
		return (str);
	}
	if (res >= 10 && res  < 16)
	{
		str[i] = 'a' + (res - 10);
		str[i + 1] = '\0';
		return (str);
	}
	str[i] = res + '0';
	str[i + 1] = '\0';
	return (str);
}
