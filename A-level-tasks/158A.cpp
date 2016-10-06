#include <iostream>


int main()
{
	short int n, k, value;
	std::cin >> n >> k;

	short int count = 0, score = 0, result = 0;

	for (short int i = 0; i < n; ++i) {
		std::cin >> value;
		count += 1;
		if ((count == k) && (value > 0)) {
			score = value;
			result = count;
			continue;
		}
		if (value == score) {
			result += 1;
		}
	}

	std::cout << result;

	return 0;
}