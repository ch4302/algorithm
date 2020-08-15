#include <iostream>
using namespace std;

int main()
{
	int n, arr[100];
	int i = 0;
	cin >> n;
	if (n == 0) {
		cout << 0;
		return 0;
	}

	while (n > 0) {
		arr[i] = n % 2;
		i++;
		n /= 2;
	}

	for (int j = i - 1; j >= 0; j--) {
		cout << arr[j];
	}
}