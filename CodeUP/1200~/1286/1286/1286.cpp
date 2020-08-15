#include <iostream>
using namespace std;

int main()
{
	int max = -1000000, min = 1000000, temp;
	for (int i = 0; i < 5; i++) {
		cin >> temp;
		if (temp < min) min = temp;
		if (temp > max) max = temp;
	}
	cout << max << endl << min;
}