#include <iostream>	
using namespace std;

int main()
{
	int arr[10], idx;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	cin >> idx;
	cout << arr[idx - 1];
}