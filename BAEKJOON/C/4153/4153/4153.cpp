#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	while (true) {
		int temp;
		bool flag = true;
		vector<int> a;
		for (int i = 0; i < 3; i++) {
			cin >> temp;
			a.push_back(temp);
			if (temp != 0) flag = false;
		}
		if (flag) return 0;
		sort(a.begin(), a.end());
		if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) cout << "right\n";
		else cout << "wrong\n";		
	}
}