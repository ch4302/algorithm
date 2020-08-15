#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n, r;
	char str[20];
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> r >> str;
		for (int j = 0; j < strlen(str); j++) {
			for (int k = 1; k <= r; k++) {
				cout << str[j];
			}
		}
		cout << "\n";
	}
}