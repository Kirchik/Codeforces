#include <iostream>
#include <cmath>

long long a;
unsigned int m, n;


int main()
{
	std::cin >> n >> m >> a;

	std::cout << ceil(double(n) / a) * ceil(double(m) / a) << std::endl;

    return 0;
}

