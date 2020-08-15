#include <iostream>
using namespace std;

int main() {
	int k, n, m;
	cin >> k >> n >> m;
	if (m >= k * n) cout << 0;
	else cout << (k * n) - m;
}