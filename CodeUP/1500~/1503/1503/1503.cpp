#include <iostream>
using namespace std;

int main()
{
	int n, cnt = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			for (int j = 1; j <= n; j++) {
				cout << cnt << " ";
				cnt++;
			}
			cnt += n;
		}
		else {
			for (int j = 1; j <= n; j++) {
				cout << cnt - j << " ";
			}
		}
		cout << endl;
	}
}