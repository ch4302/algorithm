#include <iostream>
using namespace std;

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int n;
	int a, b;
	int arr[3] = { 1, 0, 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		swap(&arr[a - 1], &arr[b - 1]);
	}
	for (int i = 0; i < 3; i++) {
		if (arr[i] == 1) cout << i + 1;
	}
}