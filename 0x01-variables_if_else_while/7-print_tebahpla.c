#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and in reverse,
 * followed by a new line
 * Retun: Always 0
 */

int main(void)
{
	char ch;
	for (ch = 'z'; ch >= 'a'; ch--) 
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
