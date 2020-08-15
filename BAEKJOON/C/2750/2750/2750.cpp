#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, temp;
	vector<int> arr;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
}