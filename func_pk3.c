#include "main.h"
/**
 * _bin - function to print binary
 * @bin: list
 * Return: the function
 */
int _bin(va_list bin)
{
	int count = 0, i;
	int *arr;
	unsigned int n = va_arg(bin, unsigned int);
	unsigned int tmp = n;

	while (n / 2 != 0)
	{
		n /= 2;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return (0);
	}
	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 2;
		tmp /= 2;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}


#include "main.h"
/**
 * _oct - function to print octal
 * @octo: list being passed
 * Return: updated count
 */
int _oct(va_list octo)
{
	int count = 0, i;
	int *arr;
	unsigned int n = va_arg(octo, unsigned int);
	unsigned int tmp = n;

	while (n / 8 != 0)
	{
		n /= 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));
	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 8;
		tmp /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}


#include "main.h"
/**
 * _rot13 - prints rot13
 * @rot: list being passed
 * Return: count of chars
 */
int _rot13(va_list rot)
{
	int a, count;
	char *s;

	a = count = 0;
	s = va_arg(rot, char *);

	if (s == NULL)
		return (-1);
	while (s[a] != '\0')
	{
		if ((s[a] >= 'a' && s[a] <= 'z') ||
				(s[a] >= 'A' && s[a] <= 'Z'))
		{
			if ((s[a] >= 'n' && s[a] <= 'z') ||
					(s[a] >= 'N' && s[a] <= 'Z'))
				count = count + _putchar(s[a] - 13);
			else
				count = count + _putchar(s[a] + 13);
		}
		else
			count = count + _putchar(s[a]);
		a++;
	}
	return (count);
}


#include "main.h"
/**
 * str - prints string to stdout
 * @string: list
 * Return: number of char
 */
int str(va_list string)
{
	int len;
	char *str;

	str = va_arg(string, char *);

	if (str == NULL)
		str = "(null)";
	len = 0;

	while (str[len] != '\0')
		len = len + _putchar(str[len]);
	return (len);
}


#include "main.h"
/**
 * _ui - unsigned int print to stdout
 * @unsign: list being passed
 * Return: char count
 */
int _ui(va_list unsign)
{
	unsigned int n;
	int expo = 1;
	int len = 0;

	n = va_arg(unsign, unsigned int);

	while (n / expo > 9)
		expo *= 10;
	while (expo != 0)
	{
		len = len + _putchar(n / expo + '0');
		n = n % expo;
		expo = expo / 10;
	}
	return (len);
}
