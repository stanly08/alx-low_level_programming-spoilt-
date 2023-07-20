#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet in lowercase, followed by a new line
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int h;
	int i;
	for (i = 1; h <= 10; i++)
		{
			for (i = 97; i <= 122; i++)
			{
		_putchar(i);
			}
			_putchar('\n');
	}
}
