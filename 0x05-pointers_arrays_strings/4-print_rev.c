#include "main.h"
/**
 * print_rev - fxn that prints a string, in reverse
 * @s: used string reference pointer
 * Return: 0
 */
void print_rev(char *s)
{
int start = 0;

while (s[start])
	start++;
while (start--)
	_putchar(s[start]);
_putchar('\n');
}
