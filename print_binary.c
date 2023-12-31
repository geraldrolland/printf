#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * write_binary - create binary numbers to the output
 * @num: the parameter of the integer
 * Return: integer
 */
int write_binary(unsigned int num)
{
	char *ret;
	int i;
	int size;
	char ch;
	char *str = malloc(400);

	if (num == 1)
	{
		ch = '1';
		write(1, &ch, 1);
		return (1);
	}
	if (num == 0)
	{
		ch = '0';
		write(1, &ch, 1);
		return (1);
	}
	if (str == NULL)
	{
		return (0);
	}
	ret = print_binary(num, str, 0);
	i = _strlen(ret);
	size = i;
	i--;
	for (; i >= 0; i--)
	{
		ch = ret[i];
		write(1, &ch, 1);
	}
	free(str);
	return (size);
}
/**
 * print_binary - print binanry numbers to the output
 * @num: integer variable
 * @ptr: pointer to a string
 * @i: iterator
 * Return: return ptr
 */
char *print_binary(unsigned int num, char *ptr, int i)
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
