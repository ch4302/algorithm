#include <iostream>
using namespace std;

int main()
{
	int num[10];
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < 9; i++) {
		for (int j = i; j < 10; j++) {
			if (num[i] < num[j]) {
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	cout << num[2];
}