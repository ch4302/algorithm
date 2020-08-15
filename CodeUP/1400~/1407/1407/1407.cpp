#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[100];
	cin.getline(str, 100, '\n');
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ' ') cout << "";
		else cout << str[i];
	}
}