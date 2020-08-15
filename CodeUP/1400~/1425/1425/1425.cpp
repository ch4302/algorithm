#include <iostream>
using namespace std;

int main()
{
	int n, c, std[100];
	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		cin >> std[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i; j < n; j++) {
			if (std[i] > std[j]) {
				int temp = std[i];
				std[i] = std[j];
				std[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (i % c == 0 && i != 0) cout << endl << std[i] << " ";
		else cout << std[i] << " ";
	}
}