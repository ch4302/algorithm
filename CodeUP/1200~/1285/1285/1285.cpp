#include <iostream>
using namespace std;

int main()
{
	int num, result = 0;
	char sign;
	cin >> num;
	result = num;
	cin >> sign;
	while (sign != '=') {
		cin >> num;
		switch (sign) {
		case '+':
			result += num;
			break;
		case '-':
			result -= num;
			break;
		case '*':
			result *= num;
			break;
		case '/':
			result /= num;
			break;
		}
		cin >> sign;
	}
	cout << result;
}