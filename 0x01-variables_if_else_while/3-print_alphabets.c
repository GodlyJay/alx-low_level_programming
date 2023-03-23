#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print alphates in lowercase'
 *Return: Always return 0
 */
int main(void)
{
	int n = 97;

	for (n = 97; n < 123; n++)
	{
	putchar(n);
	}
	putchar('\n');

	int a = 65;

	for (a = 65; a < 90; a++)
	{
	putchar(a);
	}
	return (0);
}
