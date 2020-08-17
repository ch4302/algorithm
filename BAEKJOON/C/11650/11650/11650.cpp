#include <iostream>
#include <algorithm>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.first == b.first) return a.second < b.second;
	return a.first < b.first;
}

int main() {
	int n;
	pair<int, int> num[100001];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num[i].first >> num[i].second;
	}

	sort(num, num + n, compare);

	for (int i = 0; i < n; i++) {
		cout << num[i].first << " " << num[i].second << '\n';
	}
}