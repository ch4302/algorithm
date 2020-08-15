#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;

	double n1 = a * b / c;
	double n2 = a / b * c;

	cout << (long long)max(n1, n2);
}