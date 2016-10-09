#include <iostream>

short int m, n;


int main()
{
	std::cin >> m >> n;
	
	if (m % 2 == 0)
	{
		std::cout << m / 2 * n;
	}
	else
	{
		if (n == 1)
		{
			std::cout << (m - 1) / 2;
		}
		else
		{
			if (n % 2 == 0)
			{
				std::cout << m * n / 2;
			}
			else
			{
				std::cout << m * (n - 1) / 2 + (m - 1) / 2;
			}
		}
	}

	return 0;
}