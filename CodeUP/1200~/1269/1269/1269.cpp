#include <iostream>
using namespace std;

int main()
{
	int a, b, c, n;
	cin >> a >> b >> c >> n;

	for (int i = 2; i <= n; i++) {
		a = a * b + c;
	}
	cout << a;
}