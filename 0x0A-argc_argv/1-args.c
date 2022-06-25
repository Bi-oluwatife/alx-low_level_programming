#include <stdio.h>
/**
 *main - prints the number of argument received
 *@argc: Arg counts
 *@argv: Array of arg strings
 *Return: 0 for successful exit
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc);
	return (0);
}
