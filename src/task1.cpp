#include "task1.h"

unsigned long findValue(unsigned int min, unsigned max)
{
	unsigned long res = min;


	for (int i = min; i <= max; i++)

	{
		if (res % i != 0)
		{
			for (int j = 2; j <= i; j++)
			{
				if ((res*j) % i == 0)
				{
					res = res * j;
					break;
				}
				else
					continue;

			}

		}
	}

	return res;
}