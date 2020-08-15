#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int temp, burger_min = 2000, soda_min = 2000;
	vector<int> burger;
	vector<int> soda;
	for (int i = 0; i < 3; i++) {
		cin >> temp;
		burger.push_back(temp);
		burger_min = min(burger_min, burger[i]);
	}
	for (int i = 0; i < 2; i++) {
		cin >> temp;
		soda.push_back(temp);
		soda_min = min(soda_min, soda[i]);
	}

	cout << burger_min + soda_min - 50;
}