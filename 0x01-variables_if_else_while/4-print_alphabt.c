#include <stdio.h>

/**
 * main - print the alphabets in lowercase,
 * excluding the alphabet q and e,
 * followed by a new line
 * Return: Always
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}

