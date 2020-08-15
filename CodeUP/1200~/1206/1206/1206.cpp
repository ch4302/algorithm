#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	if ((num1 <= num2) && (num2 % num1 == 0)) {
		cout << num1 << "*" << num2 / num1 << "=" << num2;
	}
	else if ((num1 > num2) && (num1 % num2 == 0)) {
		cout << num2 << "*" << num1 / num2 << "=" << num1;
	}
	else {
		cout << "none";
	}

}