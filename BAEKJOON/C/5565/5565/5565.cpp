#include <iostream>
using namespace std;

int main() {
	int total, temp;
	cin >> total;
	for (int i = 1; i <= 9; i++) {
		cin >> temp;
		total -= temp;
	}
	cout << total;
}