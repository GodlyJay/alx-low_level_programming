#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print alphates in lowercase'
 *Return: Always return 0
 */
int main(void)
{
	int n = 97;
	int a = 65;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	while (n < 91)
	{
		putchar(a);
		a++
	}
	putchar('\n');
	return (0);
}
