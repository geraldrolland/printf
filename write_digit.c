#include <unistd.h>
#include <stdlib.h>
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
}*/
