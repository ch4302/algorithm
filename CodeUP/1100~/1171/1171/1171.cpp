#include <iostream>
using namespace std;

void cal_class(int c) {
	if (c < 10) {
		cout << "0" << c;
	}
	else {
		cout << c;
	}
}

void cal_number(int n) {
	if (n < 10) {
		cout << "00" << n;
	}
	else if (n >= 10 && n < 100) {
		cout << "0" << n;
	}
	else {
		cout << n;
	}
	
}

int main()
{
	int num_grade, num_class, num_number;

	cin >> num_grade >> num_class >> num_number;

	cout << num_grade;
	cal_class(num_class);
	cal_number(num_number);
}
