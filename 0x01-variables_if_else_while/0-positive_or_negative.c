#include <stdio.h>
#include <time.h>
/*
 *main - this fnx is main
 *Describtion: 'Positive and negative numbbers'
 *Return: returns 0
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("The number is positive");
	}
	else if (n == 0)
	{
		printf("The number is 0");
	}
	else
	{
		printf("The number is negative");
	}
	return (0);
}
