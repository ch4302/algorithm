#include <iostream>
using namespace std;

int main()
{
	int num1, num2, result;
	char sign;

	cin >> num1 >> sign >> num2;
	switch (sign) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		printf("%.2lf", (double)num1 / num2);
		return 0;
		break;
	}
	cout << result;
}