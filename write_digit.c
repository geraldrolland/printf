#include <unistd.h>
#include "main.h"
/**
 * write_digit - write all characters in digits
 * @num: the numbers of all the characters in string
 * Return: all written digits 
 */
void write_digit(int num)
{
	int count = count_digit(num, 0);
	char num_string[20];
	char *ptr = insert_digit(num, num_string, 0);
	char ch;

	if (ptr[0] == '-')
	{
		write(1, "-", 1);
		count--;
		for ( ; count >= 1; count--)
		{
			ch = ptr[count];
			write(1, &ch, 1);
		}
	}
	else
	{
		count--;
		for ( ; count >= 0; count--)
		{
			ch = ptr[count];
			write(1, &ch, 1);
		}
	}
}
/**
 * insert_digits - insert all digits in the string of characters
 * @num: the parameter of the characters
 * @str: string of the characters
 * @i: index at which to insert digits
 * Return: character
 */ 
char *insert_digit(int num, char *str, int i)
{
	int remainder;

	if (num < 0)
	{
		str[i] = '-';
		i = 1;
		num = num * (-1);
	}
	if (num == 0)
	{
		str[i] = '0';
		str[i + 1] = '\0';
		return (str);
	}
	remainder = num % 10;
	str[i] = remainder + '0';
	if (num >= 10)
	{
		return (insert_digit(num / 10, str, i + 1));
	}
	else
	{
		str[i + 1] = '\0';
		return (str);
	}
}
/**
 * count_digit - the numbers of digits to be counted in the character
 * @num: the parameter of the integer
 * @count: the number of occurence of an element in a given range
 * Return: the numbers of  integer
 */ 
int count_digit(int num, int count)
{
	int remainder, res;

	if (num < 0)
	{
		count = 1;
		num = num * (-1);
	}
	if (num < 10)
	{
		count++;
		return (count);
	}
	if (num == 10)
	{
		count += 2;
		return (count);
	}
	if (num < 100 && num > 10)
	{
		count += 2;
		return (count);
	}
	remainder = num % 10;
	res = num - remainder;
	res = res / 10;
	count++;
	return (count_digit(res, count));
}
