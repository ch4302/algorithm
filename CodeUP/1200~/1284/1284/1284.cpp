#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			cout << i << " " << num / i;
			return 0;
		}
	}

	cout << "wrong number";
}