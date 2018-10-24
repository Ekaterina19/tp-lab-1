
#include "pch.h"
#include <iostream>
#include "task1.h"

int main()
{
	unsigned long min = 5;
	unsigned long max = 15;
	std::cin >> min >> max;
	unsigned long res = findValue(min, max);
	std::cout << res;
	return 0;
}
