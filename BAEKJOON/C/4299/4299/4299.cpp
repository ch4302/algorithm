#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	int n, m, sc1, sc2;
	cin >> n >> m;
	sc1 = (n - m) / 2;
	sc2 = (n + m) / 2;

	if ((n + m) % 2 != 0 || (n - m) % 2 != 0) {
		cout << -1 << '\n';
	}
	else if (sc1 >= 0 && sc2 >= 0) {
		cout << max(sc1, sc2) << " " << min(sc1, sc2);
	}
	else {
		cout << -1 << '\n';
	}
}