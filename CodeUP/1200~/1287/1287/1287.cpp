#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= num * i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}