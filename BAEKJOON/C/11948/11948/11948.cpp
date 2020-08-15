#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int sum = a + b + c + d + e + f;
	cout << sum - (min(a, min(b, min(c, d))) + min(e, f));
}