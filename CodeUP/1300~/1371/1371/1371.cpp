#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		for (int j = i; j < num; j++) {
			cout << " ";
		}
		cout << "*";
		for (int j = 1; j < i * 2 - 1; j++) {
			cout << " ";
		}
		cout << "*" << endl;
	}
	for (int i = 1; i <= num; i++) {
		for (int j = num - i; j < num - 1; j++) {
			cout << " ";
		}
		cout << "*";
		for (int j = 1; j < num * 2 - (i * 2 - 1); j++) {
			cout << " ";
		}
		cout << "*" << endl;
	}
}