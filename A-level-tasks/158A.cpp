#include <iostream>

char str[101];
char mas[13] = "AaOoIiUuYyEe";
int b;


int main()
{
	std::cin >> str;
	
	for (int i = 0; str[i] != '\0'; ++i)
	{
		b = 0;
		for (int j = 0; j < 12; ++j)
		{
			if (str[i] == mas[j])
			{
				b++;
			}
		}
		if (b == 0)
		{
			if (char(str[i]) <= 90)
			{
				char a = char(str[i] + 32);
				std::cout << '.' << a;
			}
			else
			{
				std::cout << '.' << str[i];
			}
		}
	}

	return 0;
}