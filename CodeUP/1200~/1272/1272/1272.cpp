#include <iostream>
using namespace std;

void donate(int v, int* sum) {
	if (v % 2 == 0) {
		*sum += v / 2 * 10;
	}
	else {
		*sum += v / 2 + 1;
	}
}

int main()
{
	int john, bob, sum = 0;
	cin >> john >> bob;

	donate(john, &sum);
	donate(bob, &sum);

	cout << sum;
}