#include <iostream>
#include <string>


int main() {
	int count1 = 0;
	int count0 = 0;
	std::string str;
	std::cin >> str;

	for (unsigned int i = 0; i < str.length(); ++i) {
		if (str[i] == '1') {
			count0 = 0;
			count1 += 1;
		}
		if (count1 >= 7) {
			std::cout << "YES";
			break;
		}
		else if (str[i] == '0') {
			count1 = 0;
			count0 += 1;
		}
		if (count0 >= 7) {
			std::cout << "YES";
			break;
		}
	}
	if ((count0 < 7) && (count1 < 7)) {
		std::cout << "NO";
	}
	return 0;
}
