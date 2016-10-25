#include <iostream>
#include <string>


int main() {
	std::string a, b;
	std::cin >> a >> b;
	for (unsigned int i = 0; i < a.length(); ++i) {
		if (a[i] >= char(65) && a[i] <= char(90)) {
			a[i] = char(a[i] + char(32));
		}
		if (b[i] >= char(65) && b[i] <= char(90)) {
			b[i] = char(b[i] + char(32));
		}
	}
	if (a == b) {
		std::cout << 0;
	}
	else if (a > b) {
		std::cout << 1;
	}
	else std::cout << -1;
	return 0;
}