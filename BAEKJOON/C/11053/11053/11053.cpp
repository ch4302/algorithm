#include <iostream>
#include <vector>
using namespace std;

int len(std::vector<int>& arr) {
	int length = 0, flag = 0;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] > flag) {
			length++;
			flag = arr[i];
		}
	}
	return length;
}

int main()
{
	int n, temp;
	vector<int> arr;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		arr.push_back(temp);
	}
	cout << len(arr);
}