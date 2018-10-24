#include "pch.h"
#include <iostream>
#include "task5.h"

int main()
{
	int N = 5;
	char buf[] = "123,124,125";
	char** result;
	split(&result, &N, buf, ',');
	std::cout << N << std::endl;
	for (int i = 0; i < N; i++)
		std::cout << result[i] << std::endl;

}