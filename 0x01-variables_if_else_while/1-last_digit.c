#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: print status of value of n: is not less than 6, greater than and is zero
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*your code goes here*/
	digit = n % 10; /*gets last digit*/

	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	else if (digit < 6 && digit !=0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);

	return (0);
}
