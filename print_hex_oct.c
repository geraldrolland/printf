#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * call_back - call back numbers of characters to the output
 * @str: strings of a character
 * @i: integer
 * @res: declaration of an object with the name res of the type struct response
 * Return: return all integers and character
 */
char *call_back(char *str, int i, int res);
/**
 * write_hex - a hexadecimal number is represented by preceding number
 * @num: integer variable
 * @var: character of variable
 * Return: return all integers and character
 */
int write_hex(unsigned int num, char var)
{
	char *str = malloc(3000);
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
char *insert_hex(int num, char *str, int i)
{
	int remainder, res;

	remainder = num % 16;
	res = num - remainder;
	res = res / 16;
	if (remainder == 10)
	{
		str[i] = 'a';
		i++;
	}
	if (remainder == 11)
	{
		str[i] = 'b';
		i++;
	}
	if (remainder == 12)
	{
		str[i] = 'c';
		i++;
	}
	if (remainder == 13)
	{
		str[i] = 'd';
		i++;
	}
	if (remainder == 14)
	{
		str[i] = 'e';
		i++;
	}
	if (remainder == 15)
	{
		str[i] = 'f';
		i++;
	}
	if (remainder < 10)
	{
		str[i] = remainder + '0';
		i++;
	}
	if (res < 16)
		return (call_back(str, i, res));
	return (insert_hex(res, str, i));
}
/**
 * _strlen - takes a string as an argument and return its length
 * @str: string of all character
 * Return: return all strings
 */
int _strlen(char *str)
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
 * write_oct - write the function numbers with arguments and with retun value
 * @num: integer variable
 * Return: integer
 */
int write_oct(unsigned int num)
{
	char *str = malloc(3000);
	char *ptr = insert_oct(num, str, 0);
	int size = _str_len(ptr);
	int len = size;
	char ch;

	size--;
	for (; size >= 0; size--)
	{
		ch = ptr[size];
		write(1, &ch, 1);
	}
	free(ptr);
	return (len);
}
/**
 * insert_oct - insert the function numbers with arguments in its return value
 * @num: integer variable
 * @str: string of a character
 * @i: iterator
 * Return: all number in the characters
 */
char *insert_oct(unsigned int num, char *str, int i)
{
	int remainder, res;

	remainder = num % 8;
	res = num - remainder;
	res = res / 8;
	str[i] = remainder + '0';
	i++;
	if (res > 0)
	{
		return (insert_oct(res, str, i));
	}
	/*str[i] = res + '0';*/
	str[i] = '\0';
	return (str);
}
/**
 * call_back - call back the numbers of characters
 * @str: string of a character
 * @i: iterator
 * @res: the contraction of all results of charater
 * Return: return all character in string
 */
char *call_back(char *str, int i, int res)
{
	if (res == 0)
	{
		str[i] = '\0';
		return (str);
	}
	if (res == 10)
	{
		str[i] = 'a';
		str[i + 1] = '\0';
		return (str);
	}
	if (res == 11)
	{
		str[i] = 'b';
		str[i + 1] = '\0';
		return (str);
	}
	if (res == 12)
	{
		str[i] = 'c';
		str[i + 1] = '\0';
		return (str);
	}
	if (res == 13)
	{
		str[i] = 'd';
		str[i + 1] = '\0';
		return (str);
	}
	if (res == 14)
	{
		str[i] = 'e';
		str[i + 1] = '\0';
		return (str);
	}
	if (res == 15)
	{
		str[i] = 'f';
		str[i + 1] = '\0';
		return (str);
	}
	str[i] = res + '0';
	str[i + 1] = '\0';
	return (str);
}
