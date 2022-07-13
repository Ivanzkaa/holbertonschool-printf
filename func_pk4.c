#include "main.h"
/**
 * ch - function to return char
 * @character: list given
 * Return: number of char printed
 */
int ch(va_list character)
{
	return (_putchar(va_arg(character, int)));
}


#include "main.h"
/**
 * _hex_l - printing lower case hexa
 * @hexa: argument recieved
 * Return: num of char printed
 */
int _hex_l(va_list hexa)
{
	return (_hex_str(va_arg(hexa, unsigned int), 16, 'a'));
}


#include "main.h"
/**
 * _hex_u - printing upper case hexa
 * @hexa: argument recieved
 * Return: num of char printed
 */
int _hex_u(va_list hexa)
{
	return (_hex_str(va_arg(hexa, unsigned int), 16, 'A'));
}

#include "main.h"
/**
 * _int - function to print int
 * @integ: list printed
 * Return: Return count
 */
int _int(va_list integ)
{
	int a, expo = 1, len = 0;
	unsigned int n;

	a = va_arg(integ, int);

	if (a < 0)
	{
		len = len + _putchar('-');
		n = a * -1;
	}
	else
		n = a;
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


#include "main.h"
/**
 * _hex_str - converts the number from base 10 to hex
 * @n: number to be converted
 * @hex: base of 16 being passed
 * @alpha: Char 'A' to 'F' or 'a' to 'f'
 * Return: number of chars printed
 */
int _hex_str(unsigned int n, unsigned int hex, char alpha)
{
	unsigned int a = n % hex;
	unsigned int b = n / hex;
	char c;

	if (a > 10)
		c = (a - 10) + alpha;
	else
		c = a + '0';
	if (b == 0)
	{
		return (_putchar(c));
	}
	if (b < hex)
	{
		if (b > 10)
			return (_putchar(b - 10 + alpha) + _putchar(c));
		return (_putchar(b + '0') + _putchar(c));
	}
	return (_hex_str(b, hex, alpha) + _putchar(c));
}

