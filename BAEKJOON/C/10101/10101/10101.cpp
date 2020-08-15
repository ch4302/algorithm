#include <iostream>
using namespace std;

int main() {
	int s[3];
	int sum = 0;
	bool flag_e = true;
	bool flag_s = false;
	for (int i = 0; i < 3; i++) {
		cin >> s[i];
		sum += s[i];
		if (s[i] != 60) flag_e = false;
	}
	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (s[i] == s[j]) flag_s = true;
		}
	}
	if (flag_e) cout << "Equilateral";
	else if (sum == 180 && flag_s) cout << "Isosceles";
	else if (sum == 180) cout << "Scalene";
	else cout << "Error";

}