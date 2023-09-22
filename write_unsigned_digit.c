#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * write_unsigned_digit - the character write unsigned digit
 * @num: number of digits
 * Return: the character of write unsigned digit
 */
void write_unsigned_digit(unsigned int num)
{
	char num_string[80];
	char *ptr = insert_unsigned_digit(num, num_string, 0);

	write(1, ptr, _strlen(ptr));
}
/**
 * insert_unsigned_digit - insert the unsigned digits in character
 * @num: number of character in string
 * @str: the lenght of the string
 * @i: interator
 * Return: unsigned character
 */
char *insert_unsigned_digit(unsigned int num, char *str, int i)
{
	int remainder, j, temp;

	if (num == 0)
{
	str[i] = '0';
	str[i + 1] = '\0';
	return (str);
}
temp = count_unsigned_digit(num);
str[temp] = '\0';
temp--;

for (j = temp; j >= 0; j--)
{
	remainder = num % 10;
	str[j] = remainder + '0';
	num /= 10;
}
return (str);
}
/**
 * count_unsigned_digit - count the unsigned digit described in the character
 * @num: number of string in character
 * Return: integer
 */
int count_unsigned_digit(unsigned int num)
{
	int len = 0;

do {
	len++;
	num = num / 10;
} while (num != 0);
return (len);
}
