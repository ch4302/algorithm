#include <iostream>
using namespace std;

int main()
{
	int h, k;
	char dir;
	cin >> h >> k >> dir;

	if (dir == 'L') {
		for (int i = 1; i <= h; i++) {
			for (int j = 1; j < i; j++) {
				cout << " ";
			}
			for (int j = 1; j <= k; j++) {
				cout << "*";
			}
			cout << endl;
		}
	}
	if (dir == 'R') {
		for (int i = 1; i <= h; i++) {
			for (int j = i; j < h; j++) {
				cout << " ";
			}
			for (int j = 1; j <= k; j++) {
				cout << "*";
			}
			cout << endl;
		}
	}

}