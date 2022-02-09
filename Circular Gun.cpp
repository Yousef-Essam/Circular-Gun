#include <iostream>

int main() {
	int x, L, a, b, n;

	while (true) {
		std::cout << "Number of Players : ";
		std::cin >> x;
		if (x < 2)
			std::cout << "Invalid Input. Number of Players must be greater than 1." << std::endl;
		else break;
	}
	
	while (true) {
		std::cout << "Starting Player : ";
		std::cin >> L;
		if (L >= 1 && L <= 100) break;
		else
			std::cout << "Invalid Input. Starting Player must be a number between 1 and " << x << std::endl;
	}
	

	a = 1;
	b = L - 1;
	n = x;

	int i = 1;
	while (true) {
		if (n == 1) {
			std::cout << "The only survivor is Player " << ((a + b <= x) ? (a + b) : (a + b - x)) << std::endl;
			std::cout << "The game will end after " << i << " rounds." << std::endl;
			break;
		} else {
			b += (n % 2 == 0) ? -a : a;
			n /= 2;
			a *= 2;
		}

		i++;
	}

	return 0;
}