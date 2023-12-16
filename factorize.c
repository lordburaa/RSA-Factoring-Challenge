#include "fac.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
/**
 * factorize - the function facotrize a number
 * @buffer: pointer ot the addres of the number
 * Author: biruk
 * Return: int
 */
int factorize(char *buffer)
{
	uint32_t num;
	uint32_t i;

	num = atoi(buffer);
	for (i = 2; i < num / 2; i++)
	{
		if (num % i == 0)
		{
			printf("%d=%d*%d\n", num,num/i,i);
			break;
		}
	}
	return (0);
}
