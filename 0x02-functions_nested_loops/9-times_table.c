#include "main.h"

/**
 * times_table - prits the 9 times table
 *
 * Example
 * 0, 0, 0
 * 0, 1, 2
 * 0, 2, 4
 *
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; ++num)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			/**
			 * put space if product is a single number
			 * only put the first digit if it is two numbers
			 */
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48); /* only take the first digit */

			_putchar((prod % 10) + 48); /* take the second digit */
		}
		_putchar('\n');
	}
}
