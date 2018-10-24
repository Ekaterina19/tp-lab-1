

#include "pch.h"
#include <locale.h>
#include <math.h>
#include "task3.h"

unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum = 2;
	for (unsigned int j = 3; j < hbound; j++)
	{
		int flag = 0;
		for (unsigned int i = 2; i <sqrt(j)+1; i++)
		{
			if ((j%i) == 0)
			{
				flag++;
				break;
			}
		}
		if (flag ==0 )
		sum = sum + j;
		
	}
	return sum;
}



