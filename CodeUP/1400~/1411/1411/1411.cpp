#include <iostream>
using namespace std;

int main()
{
	int cnt, temp;
	int arr[50] = { 0, };
	cin >> cnt;
	for (int i = 0; i < cnt - 1; i++) {
		cin >> temp;
		arr[temp - 1]++;
	}
	for (int i = 0; i < cnt; i++) {
		if (arr[i] == 0) {
			cout << i + 1;
			return 0;
		}
	}
}