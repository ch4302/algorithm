#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[100];
	int cnt = 0;
	cin.getline(str, 100, '\n');
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'l' && str[i + 1] == 'o' && str[i + 2] == 'v' && str[i + 3] == 'e') cnt++;
	}
	cout << cnt;
}