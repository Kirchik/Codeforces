#include <iostream>
#include <string>

using namespace std;

string text;


int main()
{
	int n;
	cin >> n;
	int count = 0;

	do
	{
		cin >> text;
		if (text == "++X" || text == "X++")
		{
			++count;
		}
		else --count;
		--n;
	} while (n != 0);

	cout << count;

	return 0;
}
