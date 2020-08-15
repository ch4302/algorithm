#include <iostream>
using namespace std;

int main()
{
	int num, cnt = 0;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		if (i % 10 == 1) cnt++;
	}
	cout << cnt;
}