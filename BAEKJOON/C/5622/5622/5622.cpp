#include <iostream>
using namespace std;

int main() {
	string s;
	int sec = 0;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		switch (s[i]) {
		case 'A':
		case 'B':
		case 'C':
			sec += 3;
			break;
		case 'D':
		case 'E':
		case 'F':
			sec += 4;
			break;
		case 'G':
		case 'H':
		case 'I':
			sec += 5;
			break;
		case 'J':
		case 'K':
		case 'L':
			sec += 6;
			break;
		case 'M':
		case 'N':
		case 'O':
			sec += 7;
			break;
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			sec += 8;
			break;
		case 'T':
		case 'U':
		case 'V':
			sec += 9;
			break;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			sec += 10;
			break;
		}
	}

	cout << sec;
}