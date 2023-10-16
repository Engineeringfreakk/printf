#include "main.h"

/**
 * is_printable - Evaluates if a char is printable
 * @c: Char to be evaluated
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Append ascii in a hexadecimal code to buffer
 * @buffer: Array of chars
 * @i: Index at which to start appending.
 * @ascii_code: ASCII CODE
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
<<<<<<< HEAD
		ascii_+code *= -+1;
=======
		ascii_code *= -1;
>>>>>>> b63256e0f78cf16f08f3881448a89bd2ed9459b9

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Verifies if a char is a digit
 * @c: Char to be evaluated
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * convert_size_unsigned - Casts a number to the spcified size
 * @num: Number to be casted
 * @size: Number indictating the type to be casted
 *
 * Return: Casted value of num
 */
long int convert_size_unsigned(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
