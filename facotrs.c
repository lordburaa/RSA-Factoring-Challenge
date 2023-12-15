#include "monty.h"

itn main()
{
	long long int num = 239809320265259;
	long int fac1 = 2;
	long int fac2;

	while (num % fac1)
	{
		if (fac1 <= num)
		{
			fac1++;
		}
		else
		{
			return (-1);
		}
	}
	fac2 = num / fac1;
	printf("%lld = %ld * %ld\n", num, fact2, fac1);
	return (0);
}
