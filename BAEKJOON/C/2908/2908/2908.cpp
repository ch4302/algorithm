#include <iostream>
#include <cmath>
using namespace std;

void reverse(int *num) {
	int arr[3];
	int rev = 0, cnt = 3;
	for (int i = 0; i < 3; i++) {
		arr[i] = *num % 10;
		*num /= 10;
		rev += arr[i] * pow(10, --cnt);
	}
	*num = rev;
}

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	reverse(&num1);
	reverse(&num2);
	cout << (num1 > num2 ? num1 : num2);
}