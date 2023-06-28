#include <iostream>
using namespace std;
int main()
{
	int mi[4] = { 1, 2, 3, 4 };
	int* pi = (int*)((char*)mi + 2);
	cout << *pi;
}
