#include <unistd.h>
#include <stdlib.h>
<<<<<<< HEAD
#include <unistd.h>
#include "main.h"

#define MAX_DIGITS 12

void write_digit(int num)
{
    char num_string[MAX_DIGITS];
    char *ptr = insert_digit(num, num_string, 0);
    write(1, ptr, _str_len(ptr));
}

char *insert_digit(int num, char *str, int i)
{
    int remainder, j, temp;

    if (num < 0)
    {
        str[i] = '-';
        num = -num;
        i = 1;
    }

    if (num == 0)
    {
        str[i] = '0';
        str[i + 1] = '\0';
        return str;
    }

    temp = count_digit(num);
    for (j = i + temp - 1; j >= 0; j--)
    {
        remainder = num % 10;
        str[j] = remainder + '0';
        num /= 10;
    }
    str[i + temp] = '\0';
    return str;
}

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

/**
 * write_digit - write all characters in digits
 * @num: the numbers of all the characters in string
 * Return: all written digits
 *
void write_digit(int num)
{
	char *num_string = malloc(80);
	char *ptr = insert_digit(num, num_string, 0);
	write (1, ptr, _str_len(ptr));
	free(num_string);
}
**
 * insert_digit - insert all digits in the string of characters
 * @num: the parameter of the characters
 * @str: string of the characters
 * @i: index at which to insert digits
 * Return: character
 *
char *insert_digit(int num, char *str, int i)
{
    int remainder, j, temp;

    if (num < 0)
    {
        str[i] = '-';
        num = -num;
	i = 1;
    }

    if (num == 0)
    {
        str[i] = '0';
        str[i + 1] = '\0';
        return str;
    }
    temp = count_digit(num);
    for (j = i + temp - 1; j >= 0; j--)
    {
        remainder = num % 10;
        str[j] = remainder + '0';
        num /= 10;
    }
    str[i + temp] = '\0';
    return str;
}

**
 * count_digit - the numbers of digits to be counted in the character
 * @num: the parameter of the integer
 * @count: the number of occurence of an element in a given range
 * Return: the numbers of  integer
 *
=======
/**
 * write_digit - write digit for each string in character
 * @str: calculate string of lenght
 * Return: integer
 */
int _str_len(char *str);
void write_digit(int num)
{
	char num_string[80];
	char *ptr = insert_digit(num, num_string, 0);

	write(1, ptr, _str_len(ptr));
}
/**
 * insert_digit - insert digits in character
 * @num: number of digit in character
 * @str: calculate strings in character
 * @i: iterator
 * Return: return all character
 */
char *insert_digit(int num, char *str, int i)
{

	int remainder, j, temp;

	if (num < 0)
	str[i] = '-';
	num = num / (-1);
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
/**
 * count_digit - count digit in the character
 * @num: number of strings in integer
 * Return: all integer
 */
>>>>>>> 71073a1445cef0fdea919c0fbb6ba6ee34835a00
int count_digit(int num)
{
	int len = 0;

	if (num < 0)
<<<<<<< HEAD
	{
		len = 1;
		num = -num;
	}
	do {
		len++;
		num = num / 10;
	} while (num != 0);
	return (len);
}*/
=======
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
/**
 * _str_len - describe all the strings in the length of the character
 * @str: calculate all the string in character
 * Return: integer
 */
int _str_len(char *str)
{
	int i;
	int size = 0;
for (i = 0; str[i] != '\0'; i++)
{
size++;
}
return (size);
}
>>>>>>> 71073a1445cef0fdea919c0fbb6ba6ee34835a00
