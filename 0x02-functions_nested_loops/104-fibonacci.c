#include <stdio.h>

/**
 * main - prints sum of even-valued fibonacci numbers under 4,000,000
 * Return: 0 if succesfull
 */

int main(void)
{
	long int i, a, b, sum;

	a = 1;
	b = 2;

	for (i = 0, sum = 0; a < 1779979416004714189; i++)
	{
		if (!(a % 2))
			sum += a;
		b = a + b;
		a = b - a;
printf("%ld, ", sum);
	}
	/** printf("%ld\n", sum); */
	return (0);
}
