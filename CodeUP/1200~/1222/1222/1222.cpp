#include <iostream>
using namespace std;

int main()
{
	int min, num1, num2;
	cin >> min >> num1 >> num2;

	if(min < 90) num1++;
	while (90 - min > 5) {
		min += 5;
		num1++;
	}
	if (num1 > num2) {
		cout << "win";
	}
	else if (num1 < num2) {
		cout << "lose";
	}
	else {
		cout << "same";
	}
	
}