#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void withoutTwoIdx(vector<int>& a_vector, int a, int b) {
	for (int i = 0; i < a_vector.size(); i++) {
		if (i == a || i == b) {
			continue;
		}
		else {
			cout << a_vector.at(i) << endl;
		}
	}
}

int main()
{
	const int n = 9;
	int sum = 0;
	vector<int> dwarfs;

	int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		dwarfs.push_back(temp);
		sum += dwarfs[i];
	}

	sort(dwarfs.begin(), dwarfs.end());

	for (int i = 0; i < n - 1; i++) {
		for (int j = i; j < n; j++) {
			if (sum - (dwarfs[i] + dwarfs[j]) == 100) {
				withoutTwoIdx(dwarfs, i, j);
				return 0;
			}
		}
	}
	return 0;
}