#include"main.h"

/**
 * print_alphabet - print alphaber a-z
 *
 * Description: print alphabets a-z
 *
 * returns: void
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
