#include <iostream>
using namespace std;

int main()
{
	int num, sum = 0, temp = 0;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		temp += i;
		sum += temp;
	}
	cout << sum;
}