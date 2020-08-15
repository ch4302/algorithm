#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> str;
		reverse(str.begin(), str.end());
		cout << str << endl;
	}
}