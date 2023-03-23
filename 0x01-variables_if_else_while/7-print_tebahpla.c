#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print alphates in lowercase'
 *Return: Always return 0
 */
int main(void)
{
	int n = 97;

	for (n = 122; n > 96; n--)
	{
	putchar(n);
	}
	putchar('\n');
	return (0);
}
