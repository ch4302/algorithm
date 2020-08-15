#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int bin2int(string n) {
	long long temp = 0, cnt = 0;
	for (int i = n.length() - 1; i >= 0; i--) {
		if (n[i] == '1') temp += pow(2, cnt);
		cnt++;
	}
	return temp;
}

string int2bin(long long n) {
	string temp = "";
	while (n > 0) {
		if (n % 2 == 1) temp += '1';
		else temp += '0';
		n /= 2;
	}
	reverse(begin(temp), end(temp));
	return temp;
}


int main() {
	string bin1, bin2;
	long long int1, int2;
	cin >> bin1 >> bin2;

	int1 = bin2int(bin1);
	int2 = bin2int(bin2);

	long long temp = int1 * int2;

	cout << int2bin(temp);
}