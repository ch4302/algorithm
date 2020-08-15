#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[102];
	int cnt_1 = 0, cnt_2 = 0;
	cin >> str;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'c' || str[i] == 'C') cnt_1++;
		if ((i != strlen(str) - 1) && (str[i] == 'c' || str[i] == 'C') && (str[i + 1] == 'c' || str[i + 1] == 'C')) cnt_2++;
	}
	cout << cnt_1 << endl << cnt_2;
}