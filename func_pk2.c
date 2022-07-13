#include "main.h"


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/** 
*  - 
*@:
*@:
*@:
* Return: 
*/
int print_int(va_list)
{
}
 
/** 
*  - 
* @:
* @:
*@:
* Return: 
*/
int print_percentage(va_list)
{
}
 
/** 
*  - 
*@:
*@:
*@:
* Return: 
*/
int print_unsigned_int(va_list)
{
}
 
/** 
*  - 
*@:
*@:
*@:
* Return: 
*/
int print_binary(va_list)
{ 
}
 
/**
 * _strchr - check code
 * @s: string
 * @c: char
 * Return: .0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		++s;
	}
	if (c == '\0')
		return (s);
	return (0);
}
