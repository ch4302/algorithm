#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int data[3];
	for (int i = 0; i < 3; i++) {
		cin >> data[i];
	}

	sort(data, data + 3);
	
	int a = data[0];
	int b = data[1];
	int c = data[2];

	if ((a == b) && (b == c)) cout << "2";
	else if (a * a + b * b == c * c) cout << "1";
	else cout << "0";
}