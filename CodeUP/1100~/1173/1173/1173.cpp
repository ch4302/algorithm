#include <iostream>
using namespace std;

int main()
{
	int hour, min;

	cin >> hour >> min;

	if (min >= 30) {
		min -= 30;
	}
	else {
		if (hour == 0) {
			hour += 23;
			min += 30;
		}
		else {
			hour = hour - 1;
			min += 30;
		}
	}

	if (min == 60) hour++;;
	if (hour == 24) hour = 0;

	cout << hour << " " << min;
}