#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	for (int i = num1; i <= num2; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i << "*" << j << "=" << i * j << endl;
		}
	}
}