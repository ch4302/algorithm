#include <iostream>
using namespace std;

int main()
{
	int num, cnt = 0;
	cin >> num;

	while (num > 0) {
		cnt++;
		num /= 10;
	}
	cout << cnt;
}