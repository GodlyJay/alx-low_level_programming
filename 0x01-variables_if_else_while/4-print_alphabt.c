#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print alphates in lowercase'
 *Return: Always return 0
 */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n == 101 || n == 113)
		{
			continue;
			n++;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
