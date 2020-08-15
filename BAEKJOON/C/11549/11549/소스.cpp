#include <iostream>
using namespace std;

int main() {
	int type, temp, cnt = 0;
	cin >> type;
	for (int i = 0; i < 5; i++) {
		cin >> temp;
		if (temp == type) cnt++;
	}
	cout << cnt;
}