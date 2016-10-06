// A1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

unsigned long long int a, Result;
unsigned int m, n;


int main()
{
	std::cin >> n >> m >> a;

	Result = ceil(double(n) / a) * ceil(double(m) / a);

	std::cout << Result << std::endl;

    return 0;
}

