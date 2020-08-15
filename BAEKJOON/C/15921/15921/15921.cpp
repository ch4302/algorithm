#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	double n, med = 0, exp = 0;
	int temp;
	cin >> n;
	if (n == 0) {
		cout << "divide by zero";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> temp;
		med += temp;
		exp += temp / n;
	}
	med /= n;
	printf("%.2lf", med / exp);
}