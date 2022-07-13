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
