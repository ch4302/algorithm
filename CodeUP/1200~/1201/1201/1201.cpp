#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	if (num > 0) {
		cout << "양수";
	}
	else if (num < 0) {
		cout << "음수";
	}
	else {
		cout << "0";
	}
}