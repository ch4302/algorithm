#include <iostream>
using namespace std;

int main()
{
	int num, temp, sum = 0;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		cin >> temp;
		if (temp % 5 == 0) sum += temp;
	}
	cout << sum;
}