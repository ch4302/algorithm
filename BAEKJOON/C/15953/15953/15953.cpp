#include <iostream>
using namespace std;

int main() {
	int n, a, b, money;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int money = 0;
		cin >> a >> b;
		if (a == 0) money += 0;
		else if (a == 1) money += 5000000;
		else if (a <= 3) money += 3000000;
		else if (a <= 6) money += 2000000;
		else if (a <= 10) money += 500000;
		else if (a <= 15) money += 300000;
		else if (a <= 21) money += 100000;
		
		if (b == 0) money += 0;
		else if (b == 1) money += 5120000;
		else if (b <= 3) money += 2560000;
		else if (b <= 7) money += 1280000;
		else if (b <= 15) money += 640000;
		else if (b <= 31) money += 320000;
		

		cout << money << '\n';
	}
}