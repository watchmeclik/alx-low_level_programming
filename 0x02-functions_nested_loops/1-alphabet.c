#include "main.h"

/**
 * print_alphabet - to prints the alphabet in lowercase, and then a new line.
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
