#include <iostream>
using namespace std;

int main()
{
	int num, num_ten, num_one, temp;

	cin >> num;

	num_ten = num / 10;
	num_one = num % 10;

	temp = num_ten;
	num_ten = num_one;
	num_one = temp;

	num = (num_ten * 10 + num_one) * 2;
	if (num >= 100) num -= 100;

	cout << num << endl;
	if (num <= 50) cout << "GOOD";
	else cout << "OH MY GOD";
}