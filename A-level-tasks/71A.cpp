#include <iostream>
#include <string>


int main()
{
	std::string word;
	short int n;

	std::cin >> n;

	for (short int i = 0; i < n; ++i) {
		std::cin >> word;

		int len = word.length();

		if (len > 10) {
			char str1 = word[0];	// ������ ����� �����
			char str2 = word[len - 1];	// ��������� �����
			short int amountOfSigns = len - 2;	// ����� �����
			std::cout << str1 << amountOfSigns << str2 << std::endl;
		}
		else {
			std::cout << word << std::endl;
		}
	}
	return 0;
}