#include <iostream>
using namespace std;

int main()
{
	int num, temp, cnt = 0;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		cin >> temp;
		if (temp % 2 == 0) cnt ++;
	}
	cout << cnt;
}