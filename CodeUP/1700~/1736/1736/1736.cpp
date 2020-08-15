#include <iostream>
using namespace std;

int main()
{
	int num, sec = 0, min = 0, hour = 0, day = 0;
	cin >> num;
	if (num < 60) sec = num;
	else if (num < 3600) {
		min = num / 60; 
		sec = num % 60;
	}
	else if (num < 86400) {
		hour = num / 3600;
		num -= hour * 3600;
		min = num / 60;
		sec = num % 60;
	}
	else {
		day = num / 86400;
		num -= day * 86400;
		hour = num / 3600;
		num -= hour * 3600;
		min = num / 60;
		sec = num % 60;
	}
	cout << day << " " << hour << " " << min << " " << sec;
}