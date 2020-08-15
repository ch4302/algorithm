#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	while (true) {
		string octopus;
		cin >> octopus;

		if (octopus == "#") return 0;
		int len = octopus.length();
		long long sum = 0;

		for (int i = 0; i < len; i++) {
			int t = 0;
			switch (octopus[i]) {
			case '-':
				t = 0;
				break;
			case '\\':
				t = 1;
				break;
			case '(':
				t = 2;
				break;
			case '@':
				t = 3;
				break;
			case '?':
				t = 4;
				break;
			case '>':
				t = 5;
				break;
			case '&':
				t = 6;
				break;
			case '%':
				t = 7;
				break;
			case '/':
				t = -1;
				break;
			default:
				break;
			}
			sum += t * pow(8, len - i - 1);
		}
		cout << sum << '\n';
	}
}