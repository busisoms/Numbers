#include "main.h"
#define _USE_MATH_DEFINES

/**
 * find_pi - generates PI up to entered number of
 * decimal places
 * @n: number of decimal places
 *
 */

void find_pi(int n)
{
	const int Max = 18;

	if (n <= 0 || n > Max)
	{
		printf("Invaild input: enter number above 0\n");
	}
	else
	{
		printf("%.*lf\n", n, M_PI);
	}

}

/**
 * main - print PI
 *
 * Return: (0) success
 */

int main(void)
{
	int n;

	printf("Enter how many decimals to print:\n");
	scanf("%d", &n);

	find_pi(n);
	return (0);

}
