#include "main.h"
/**
 * print_rot13 - converts string to rot13
 * @list: list of arguments
 * Return: converted string
 **/
int print_rot13(va_list list)
{
	int i;
	int x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				_write_char(u[x]);
				break;
			}
		}
		if (x == 53)
			_write_char(str[i]);
	}
	return (i);
}


#include "main.h"
/**
 * _strlen - prints out the length of the string
 * @s: string
 * Return: the string
 **/
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}


#include "main.h"
/**
 * print_hex - prints number as hex
 * @num: unsigned int
 * Return: the numbers
 **/
int print_hex(unsigned int num)
{
	if (num <= 15)
	{
		if (num <= 9)
			return (_putchar(num + '0'));
		else
			return (_putchar(num + 'a' - 10));
	}
	else
	{
		if (num % 16 <= 9)
			return (print_hex(num / 16) + _putchar(num % 16 + '0'));
		else
			return (print_hex(num / 16) + _putchar(num % 16 + 87));
	}
	return (0);
}

#include "main.h"
/**
 * print_heXadecimaln - printing a num as a hex
 * @n: num
 * Return: the outcome of the numbers
 **/
int print_heXadecimaln(unsigned int n)
{
	if (num <= 15)
	{
		if (num <= 9)
			return (_putchar(num + '0'));
		else
			return (_putchar(num + 'A' - 10));
	}
	else
	{
		if (num % 16 <= 9)
			return (print_heXadecimaln(num / 16) + _putchar(num % 16 + '0'));
		else
			return (print_heXadecimaln(num / 16) + _putchar(num % 16 + 55));
	}
	return (0);
}


#include "main.h"
/**
 * _putchar - prints out character
 * @c: character
 * Return: will print char if true
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

