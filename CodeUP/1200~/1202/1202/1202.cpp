#include <iostream>
using namespace std;

int main()
{
	int grade;
	cin >> grade;

	if (90 <= grade && grade <= 100) {
		cout << "A";
	}
	else if (grade >= 80) {
		cout << "B";
	}
	else if (grade >= 70) {
		cout << "C";
	}
	else if (grade >= 60) {
		cout << "D";
	}
	else {
		cout << "F";
	}
}