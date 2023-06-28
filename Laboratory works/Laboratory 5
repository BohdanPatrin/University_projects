#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
double f(double x);
double g(double x) {
	if (x >= 0 && x <= 1) {
		try {
				return f(x);
		}
		catch (std::string ex) {
			std::cout << ex;
			throw - 2;
			// return -3;
		}
	}
	throw - 1;
}

double f(double x) {
	std::string error = "error";
	if (x > 0.8)
		throw error;
	if (x < 0.7)
		throw 'c\n';
	return x / 2;
}

int main() {
	double y;
	srand(rand() + 200);
	for (int i = 0; i < 20; i++) {
		y = rand();
		y /= RAND_MAX;
		y += 0.5;
		try {
			std::cout << std::endl << y << ' ' << g(y) << '!\n';
		}
		catch (int ex) {
			std::cout << ex << endl;
		}
		catch (char ex) {
			std::cout << ex << endl;
		}
	}
	return 0;
}
