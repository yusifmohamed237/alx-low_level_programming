#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriprion: print all alphabet letter except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch == 'e' || ch == 'q')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		purchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
