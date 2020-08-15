#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double capital, capital_temp, pure_profit;
	int day, pal;
	cin >> capital;
	capital_temp = capital;
	cin >> day;

	for (int i = 1; i <= day; i++) {
		cin >> pal;
		capital = capital * (100 + pal) / 100;
	}

	pure_profit = floor((capital - capital_temp) + 0.5);
	cout << pure_profit << endl;

	if (pure_profit > 0) {
		cout << "good";
	}
	else if (pure_profit < 0) {
		cout << "bad";
	}
	else {
		cout << "same";
	}
}