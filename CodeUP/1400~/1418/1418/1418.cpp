#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[10];
	cin >> str;

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 't') cout << i + 1 << " ";
	}
}