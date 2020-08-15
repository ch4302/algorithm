#include <iostream>
#include <vector>
using namespace std;

long long int sum(std::vector<int> &a)
{
	long long int sum = 0;
	for (int i = 0; i < a.size(); i++) {
		sum += a[i];
	}
	return sum;
}

int main()
{
	int n, temp;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> temp;
		arr[i] = temp;
	}
	cout << sum;
}