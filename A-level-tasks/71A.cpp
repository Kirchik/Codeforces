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
			char str1 = word[0];	// первая буква слова
			char str2 = word[len - 1];	// последняя буква
			short int amountOfSigns = len - 2;	// буквы между
			std::cout << str1 << amountOfSigns << str2 << std::endl;
		}
		else {
			std::cout << word << std::endl;
		}
	}
	return 0;
}