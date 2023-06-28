#include <iostream>
using namespace std;
double (*arr[2])(double a);
double x(double a) {
	return a;
}
double x2(double a) {
	return a * a;
}
double func(double x) {
	if (x <= 0) {
		return arr[0](x);
	}
	else {
		return arr[1](x);
	}
}
int main() {
	double number;
	arr[0] = &x;
	arr[1] = &x2;
	cin >> number;
	cout << func(number) << endl;
}

