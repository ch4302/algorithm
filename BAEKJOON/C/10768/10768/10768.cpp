#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	if (n == 2 && m == 18) cout << "Special";
	else if (n == 1 || n <= 2 && m <= 18) cout << "Before";
	else cout << "After";
}