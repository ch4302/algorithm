#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int sec = 0, A, B, C, D, E;
	cin >> A >> B >> C >> D >> E;

	if (A < 0) {
		sec = abs(A) * C + D + B * E;
	}
	else {
		sec = (B - A) * E;
	}
	cout << sec;
}