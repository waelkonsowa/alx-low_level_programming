#include"main.h"

/**
 * print_alphabet 
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
