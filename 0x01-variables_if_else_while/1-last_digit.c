#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* more headers goes there */



/* betty style doc for function main goes there */

/**
 * main - print last digit of the random
 * number stored in the variable n
 * Return: always 0
 */

int main(void)

{

	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	if (n % 10 > 5)
		printf("and is greater 5\n");
	else if (n % 10 == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0");

	return (0);

}


