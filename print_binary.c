#include <unistd.h>
#include <unistd.h>
#include "main.h"
/**
 * write_binary - create binary numbers to the output
 * @num: the parameter of the integer
 * Return: integer
 */
int write_binary(int num)
{
	char str[400];
	char *ret = print_binary(num, str, 0);
	int i = _strlen(ret);
	char ch;

	if (num < 0)
	{
		write(1, "b", 1);
		return (1);
	}
	i--;
	for (; i >= 0; i--)
	{
		ch = ret[i];
		write(1, &ch, 1);
	}
	return (_strlen(ret));
}
/**
 * print_binary - print binanry numbers to the output
 * @num: integer variable
 * @ptr: pointer to a string
 * @i: iterator
 * Return: return ptr
 */
char *print_binary(int num, char *ptr, int i)
{
	int remainder, res;

	remainder = num % 2;
	ptr[i] = remainder + '0';
	res = (num - remainder) / 2;
	if (res == 1)
	{
		i++;
		ptr[i] = res + '0';
		ptr[i + 1] = '\0';
		return (ptr);
	}
	return (print_binary(res, ptr, i + 1));
}
