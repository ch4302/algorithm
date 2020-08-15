#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string trans8to2(char c) {
	string result = "";
	int num = c - '0';
	
	if (num == 0) return "0";

	while (num != 0) {
		result += to_string(num % 2);
		num /= 2;
	}
	reverse(result.begin(), result.end());

	return result;
}

int main() {
	string n;
	cin >> n;
	for (int i = 0; i < n.size(); i++) {
		if (i == 0) cout << trans8to2(n[i]);
		else {
			string temp = trans8to2(n[i]);
			while (temp.size() != 3)
				temp = '0' + temp;
			cout << temp;
		}
	}
}