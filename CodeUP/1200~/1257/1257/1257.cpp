#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	for (int i = num1; i <= num2; i++) {
		if (i % 2 == 1) cout << i << " ";
	}
}