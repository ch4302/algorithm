#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> num;
	int n;
	int idx = 0, temp;
	cin >> n;

	while (n > 0) {
		num.push_back(n % 10);
		n /= 10;
	}
	sort(num.begin(), num.end(), greater<int>());
	
	for (int i = 0; i < num.size(); i++) {
		cout << num[i];
	}
}