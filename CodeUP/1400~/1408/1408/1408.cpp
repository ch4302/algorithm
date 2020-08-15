#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char pwd[20];
	cin >> pwd;

	for (int i = 0; i < strlen(pwd); i++) {
		printf("%c", pwd[i] + 2);
	}
	cout << endl;
	for (int i = 0; i < strlen(pwd); i++) {
		printf("%c", (pwd[i] * 7) % 80 + 48);
	}
}