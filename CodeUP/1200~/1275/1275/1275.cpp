#include <iostream>
using namespace std;

int main()
{
	int n, k, result = 1;
	cin >> n >> k;

	for (int i = 1; i <= k; i++) {
		result *= n;
	}
	cout << result;
}