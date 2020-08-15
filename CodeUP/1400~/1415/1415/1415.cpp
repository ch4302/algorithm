#include <iostream>
using namespace std;

int main()
{
	int max_odd = 0, max_even = 0, temp;
	for (int i = 1; i <= 10; i++) {
		cin >> temp;
		if (temp % 2 == 0 && (max_even < temp)) max_even = temp;
		if (temp % 2 == 1 && (max_odd < temp)) max_odd = temp;
	}
	if (max_odd && max_even) cout << max_odd << " " << max_even;
	else cout << (max_odd > max_even ? max_odd : max_even);
}