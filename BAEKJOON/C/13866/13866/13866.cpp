#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c, d, sc1, sc2, sc3;
	cin >> a >> b >> c >> d;
	sc1 = abs((a + b) - (c + d));
	sc2 = abs((a + c) - (b + d));
	sc3 = abs((a + d) - (b + c));
	cout << min(sc1, min(sc2, sc3));
}