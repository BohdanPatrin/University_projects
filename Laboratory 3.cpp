#include <iostream>
using namespace std;
int main()
{
	long long* pi = new long long;
	long long* otherpi = new long long;
	int d = otherpi - pi;
	int d_temp = d;
	unsigned short int counter = 0;
	cout << "<table border=\"2\">\n";
	cout << "<th>i</th> <th>pi</th><th>d</th>";
	for (int i = 1; i < 20; i++) {
		cout << "<tr>\n";
		pi = otherpi;
		otherpi = new long long;
		d = otherpi - pi;
		if (d == d_temp) {
			counter++;
			if (counter == 10) {
				cout << "\nthe number of coincidences of d values has reached the limit\n";
					break;
			}
		}
		d_temp = d;
		cout << "<td>" << i << "</td>\n";
		cout << "<td>" << pi << "</td>\n";
		cout << "<td>" << d << "</td>\n";
		cout << "</tr>\n";
	}
	delete pi;
	delete otherpi;
}