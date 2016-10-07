#include <iostream>


int main()
{
	int n, k, a, result;
	std::cin >> n >> k;

	result = 0;
	int element2 = 0;
	
	if (n >= k)
	{
		for (int i = 0; i < n; ++i)
		{
			std::cin >> a;
			int element1 = a;

			if (a > 0)
			{
				if ((i + 1) < k)
				{
					result += 1;
				}
				else
				{
					if ((i + 1) == k)
					{
						result += 1;
					}
					else
					{
						if (element2 == element1)
						{
							result += 1;
						}
						else
						{
							break;
						}
					}
				}
			}
			element2 = a;
		}
	}

	std::cout << result;

	return 0;
}