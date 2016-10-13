#include <iostream>


int main()
{
	int n, a, b, c;
	std::cin >> n;

	int count = 0;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a >> b >> c;

		if ((a + b + c) >= 2) 
			++count; // 30ms
		/* or (60ms)
   		 if (a && b)
			++count;
		else if (b && c)
			++count;
		else if (c && a)
			++count; */
	}

	std::cout << count;

	return 0;
}
