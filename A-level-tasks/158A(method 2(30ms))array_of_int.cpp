#include <iostream>


int main()
{
	int n, k, result;
	std::cin >> n >> k;

	int mas[101];
	result = 0;

	for (int i = 0; i < n; ++i) std::cin >> mas[i];
	for (int i = 0; i < n; ++i)
	{
		if (mas[i] > 0 && mas[i] >= mas[k - 1]) result++;
	}

	std::cout << result;
	return 0;
}