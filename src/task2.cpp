#include "task2.h"


bool checkPrime (unsigned int value)
{
	for (unsigned int i = 2; i < (value - 1); i++)
	{
		if (value%i == 0 && value != 2)
		{
			return false;
			break;
		}
	}
	return true;

}

unsigned long long nPrime(unsigned n)
{
	unsigned count = 0;
	for (unsigned long long i = 2; i > 0; i++)
	{

		if (checkPrime(i) == true)
		{
			count++;
			if (n == count)
			{
				return i;
				break;
			}
		}
	}
	return 0;
}
unsigned long long nextPrime(unsigned long long value)
{
	while (!checkPrime(++value));
	return value;
}
