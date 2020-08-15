#include <iostream>
using namespace std;

int main()
{
	int num, temp, max = 0;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		cin >> temp;
		if (temp > max) max = temp;
	}
	cout << max;
}