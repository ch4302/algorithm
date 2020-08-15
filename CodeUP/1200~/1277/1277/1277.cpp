#include <iostream>
using namespace std;

int main()
{
	int num, num_first, num_mid, num_last, temp;
	cin >> num;

	
	for (int i = 1; i <= num; i++) {
		cin >> temp;
		if (num == 1) num_first = num_mid = num_last = temp;
		if (i == 1) num_first = temp;
		else if (i == (num / 2) + 1) num_mid = temp;
		else if (i == num) num_last = temp;
	}
	cout << num_first << " " << num_mid << " " << num_last;
}