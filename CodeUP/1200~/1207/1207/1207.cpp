#include <iostream>
using namespace std;

int main()
{
	int cnt = 0, temp;

	for (int i = 0; i < 4; i++) {
		cin >> temp;
		if (temp == 1) cnt++;
	}

	if (cnt == 0) {
		cout << "��";
	}
	else if (cnt == 1) {
		cout << "��";
	}
	else if (cnt == 2) {
		cout << "��";
	}
	else if (cnt == 3) {
		cout << "��";
	}
	else if (cnt == 4) {
		cout << "��";
	}


}