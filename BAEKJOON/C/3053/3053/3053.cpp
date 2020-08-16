#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	double r;
	const double pi = 3.141592653589793238462643383279;
	const int manhattan = 2;
	cin >> r;

	printf("%6lf\n", pi * r * r);
	printf("%6lf\n", manhattan * r * r);
}