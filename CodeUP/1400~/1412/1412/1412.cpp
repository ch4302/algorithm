#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[90];
	char alpha[26] = { 0, };
	cin.getline(str, 90, '\n');

	for (int i = 0; i < strlen(str); i++) {
		if(str[i] >= 'a' && str[i] <= 'z') alpha[str[i] - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		printf("%c:%d\n", i + 97, alpha[i]);
	}
}