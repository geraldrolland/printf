#include <unistd.h>
#include <stdlib.h>
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
