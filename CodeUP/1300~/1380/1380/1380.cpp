#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int i = 1; i < num; i++) {
		if (i <= 6 && num - i <= 6) {
			cout << i << " " << num - i << endl;
		}
	}
}