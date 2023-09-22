#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * write_digit - write digits in the string of each character
 * @num: number of digits in string
 * Return: all character
 */
void write_digit(int num)
{
	char num_string[80];
	char *ptr = insert_digit(num, num_string, 0);

	write(1, ptr, _str_len(ptr));
}
/**
 * insert_digit - insert digits in character
 * @num: number of character in string
 * @str: strings in each character
 * @i: interator
 * Return: all inserted digit in character
 */
char *insert_digit(int num, char *str, int i)
{
	int remainder, j, temp;

	if (num < 0)
{
	str[i] = '-';
	i = 1;
}
if (num == 0)
{
	str[i] = '0';
	str[i + 1] = '\0';
	return (str);
}
temp = count_digit(num);
str[temp] = '\0';
temp--;
if (num < 0)
{
	for (j = temp; j >= 1; j--)
{
	remainder = num % 10;
	if (remainder < 0)
{
		remainder = remainder * (-1);
}
str[j] = remainder + '0';
num /= 10;
}
return (str);
}
for (j = temp; j >= 0; j--)
{
	remainder = num % 10;
	str[j] = remainder + '0';
	num /= 10;
}
return (str);
}
/**
 * count_digit - count the digit in character
 * @num: number of digit in character
 * Return: all the counted digit
 */
int count_digit(int num)
{
	int len = 0;

	if (num < 0)
	{
		len = 1;
		num = -num;
	}
	do {
		len++;
		num = num / 10;
	} while (num != 0);
	return (len);
}
