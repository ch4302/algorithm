#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) return b;
	else return gcd(b, a % b);
}

int lcd(int a, int b) {
	return a * b / gcd(a, b);
}

int main()
{
	int a, b, num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		cin >> a >> b;
		cout << lcd(a, b) << endl;
	}
	
}