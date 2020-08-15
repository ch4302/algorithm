#include <iostream>
using namespace std;

int main()
{
	int lotto_arr[7], temp;
	int cnt = 0, cnt_b = 0;

	for (int i = 0; i < 7; i++) {
		cin >> lotto_arr[i];
	}

	for (int i = 0; i < 6; i++) {
		cin >> temp;
		for (int j = 0; j < 6; j++) {
			if (temp == lotto_arr[j]) cnt++;
		}
		if (temp == lotto_arr[6]) cnt_b++;
	}


	if (cnt == 6) {
		cout << "1";
	}
	else if (cnt == 5 && cnt_b == 1) {
		cout << "2";
	}
	else if (cnt == 5) {
		cout << "3";
	}
	else if (cnt == 4) {
		cout << "4";
	}
	else if (cnt == 3) {
		cout << "5";
	}
	else {
		cout << "0";
	}

}