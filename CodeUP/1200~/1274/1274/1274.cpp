#include <iostream>
using namespace std;

int main()
{
	int num, cnt = 0;
	cin >> num;

	if (num == 2) {
		cout << "prime"; 
		return 0;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			cout << "not prime";
			return 0;
		}
	}
	cout << "prime";
}