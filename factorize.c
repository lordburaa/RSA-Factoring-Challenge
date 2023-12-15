#include "fac.h"
/**
 * factorize - the function facotrize a number
 * @buffer: pointer ot the addres of the number
 * Author: biruk
 * Return: int
 */
int factorize(char *buffer)
{
	int num;
	int i;

	num = atoi(buffer);
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d=%d=%d\n", num,num/i,i);
			break;
		}
	}
	return (0);
}
