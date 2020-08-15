#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	if (num / 10 == 1) {
		cout << num << "th";
	}
	else {
		if (num % 10 == 1) cout << num << "st";
		else if (num % 10 == 2) cout << num << "nd";
		else if (num % 10 == 3) cout << num << "rd";
		else cout << num << "th";
	}
}